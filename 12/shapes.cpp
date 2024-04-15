#include <cassert>
#include <cmath>
#include <vector>
#include <iostream>

namespace leic
{
    class coord2d
    {
    private:
        double x;
        double y;

    public:
        coord2d() : coord2d(0.0, 0.0)
        {
        }
        coord2d(double vx, double vy) : x(vx), y(vy)
        {
        }
        coord2d(const coord2d &c) : coord2d(c.x, c.y)
        {
        }
        ~coord2d()
        {
        }
        double get_x() const
        {
            return x;
        }
        double get_y() const
        {
            return y;
        }
        void set_x(double vx)
        {
            x = vx;
        }
        void set_y(double vy)
        {
            y = vy;
        }
        coord2d &operator+=(const coord2d &c)
        {
            x += c.x;
            y += c.y;
            return *this;
        }
        coord2d operator+(const coord2d &c) const
        {
            coord2d r = *this;
            r += c;
            return r;
        }
        coord2d &operator*=(double f)
        {
            x *= f;
            y *= f;
            return *this;
        }
        coord2d operator*(double f)
        {
            coord2d r = *this;
            r *= f;
            return r;
        }
    };
    std::ostream &operator<<(std::ostream &out, const coord2d &c)
    {
        out << '(' << c.get_x() << ',' << c.get_y() << ')';
        return out;
    }

    //! Abstract class for shapes.
    class shape
    {
    public:
        //! Get area for the shape.
        //! @return The area value for the shape.
        virtual double area() const = 0;
        //! Get center of the shape.
        //! @return The geometric value for the shape.
        virtual coord2d center() const = 0;
        //! Move (translate) the shape according to supplied
        //! movement.
        //! @param direction Direction.
        virtual void move(const coord2d &direction) = 0;
        //! Destructor. Must be virtual to allow for proper
        //! invocation of subclass destructors.
        virtual ~shape() {}
    };

    //! Ellipse (aligned with XY axis for simplicity).
    class ellipse : public shape
    {
    private:
        //! Center.
        coord2d ecenter;
        //! Radius in the X axis direction.
        double erx;
        //! Radius in the Y axis direction.
        double ery;

    public:
        //! Constructor.
        //! @param c Center.
        //! @param rx Radius in the X axis direction.
        //! @param ry Radius in the Y axis direction.
        ellipse(const coord2d &c, double rx, double ry) : ecenter(c), erx(rx), ery(ry)
        {
        }
        //! Get X axis radius.
        //! @return Value for radius in the X axis direction.
        double radius_x() const
        {
            return erx;
        }
        //! Get Y axis radius.
        //! @return Value for radius in the Y axis direction.
        double radius_y() const
        {
            return ery;
        }
        coord2d center() const override final
        {
            return ecenter;
        }
        double area() const override final
        {
            return M_PI * erx * ery;
        }
        void move(const coord2d &movement) override final
        {
            ecenter += movement;
        }
    };

    //! Circle shape.
    class circle final : public ellipse
    {
    public:
        //! Constructor.
        //! @param c Center.
        //! @param r  Radius.
        circle(const coord2d &c, double r) : ellipse(c, r, r)
        {
        }
    };
    class polygon : public shape
    {
    private:
        //! Array of points (it would be simpler to use vector).
        std::vector<coord2d> points;

    public:
        //! Constructor.
        //! @param il_points Vector of points.
        polygon(const std::vector<coord2d>& il_points) : points(il_points)
        {
            assert(points.size() > 2);
        }
        //! Get number of points
        //! @return The
        int number_of_points() const
        {
            return points.size();
        }
        double area() const override final
        {
            // "Shoelace" formula
            // https://en.wikipedia.org/wiki/Shoelace_formula
            double a = 0;
            for (size_t i = 0; i < points.size(); i++)
            {
                coord2d p1 = points.at(i);
                coord2d p2 = points.at((i + 1) % points.size());
                a += p1.get_x() * p2.get_y() - p1.get_y() * p2.get_x();
            }
            return fabs(a) * 0.5;
        }
        coord2d center() const override final
        {
            coord2d c;
            for (const coord2d &p : points)
            {
                c += p;
            }
            c *= (1.0 / points.size());
            return c;
        }
        void move(const coord2d &movement) override final
        {
            for (coord2d &p : points)
            {
                p += movement;
            }
        }
    };
    //! Triangle.
    class triangle final : public polygon
    {
    public:
        triangle(const coord2d &p1, const coord2d &p2, const coord2d &p3) : polygon({p1, p2, p3}) {}
    };
    //! Rectangle.
    class rectangle : public polygon
    {
    public:
        //! Constructor.
        rectangle(const coord2d &bottom_left, double width, double height) : polygon({bottom_left,
                                                                                      bottom_left + coord2d(width, 0),
                                                                                      bottom_left + coord2d(width, height),
                                                                                      bottom_left + coord2d(0, height)})
        {
        }
    };

    //! Square.
    class square final : public rectangle
    {
    public:
        square(const coord2d &bottom_left, double width) : rectangle(bottom_left, width, width)
        {
        }
    };
    //! Drawing, a collection of  shapes.
    class drawing final
    {
    private:
        //! Vector holding (dynamically allocated shapes).
        std::vector<shape *> shapes;

    public:
        //! Construtor.
        drawing() {}

        //! Destructor.
        //! Note that it must called delete for all shape.
        ~drawing()
        {
            for (shape *s : shapes)
            {
                delete s;
            }
        }
        //! Add a shape.
        //! @param s Shape to add (should be dynamically allocated).
        void add_shape(shape *s)
        {
            shapes.push_back(s);
        }
        //! Move all shapes in the drawing.
        //! @param movement Movement.
        void move_all(const coord2d &movement)
        {
            for (shape *s : shapes)
            {
                s->move(movement);
            }
        }
        //! Get shapes in drawing.
        std::vector<shape *> &get_shapes()
        {
            return shapes;
        }
    };
}

using namespace leic;

int main(void)
{
    drawing d;
    d.add_shape(new rectangle({3, 5}, 2, 5));
    d.add_shape(new circle({1, 1}, 1));
    d.add_shape(new triangle({1, 1}, {1, 2}, {2, 1}));

    for (shape *s : d.get_shapes())
    {
        std::cout << s->center() << ' ' << s->area() << std::endl;
    }
    return 0;
}
