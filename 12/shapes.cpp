
#include <cassert>
#include "shapes.hpp"

namespace leic
{
    // shape
    shape::~shape() {}

    // ellipse
    ellipse::ellipse(const coord2d &c, double rx, double ry)
        : ecenter(c), erx(rx), ery(ry)
    {
    }

    double ellipse::radius_x() const
    {
        return erx;
    }

    double ellipse::radius_y() const
    {
        return ery;
    }

    coord2d ellipse::center() const
    {
        return ecenter;
    }

    double ellipse::area() const
    {
        return M_PI * erx * ery;
    }

    void ellipse::move(const coord2d &movement)
    {
        ecenter += movement;
    }

    // circle
    circle::circle(const coord2d &c, double r) : ellipse(c, r, r)
    {
    }

    // polygon
    polygon::polygon(const std::vector<coord2d> &v) : points(v)
    {
        assert(points.size() > 2);
    }

    int polygon::number_of_points() const
    {
        return points.size();
    }

    double polygon::area() const
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
    coord2d polygon::center() const
    {
        coord2d c;
        for (const coord2d &p : points)
            c += p;
        c *= (1.0 / points.size());
        return c;
    }

    void polygon::move(const coord2d &movement)
    {
        for (coord2d &p : points) p += movement;
    }

    // triangle
    triangle::triangle(const coord2d &p1, const coord2d &p2, const coord2d &p3)
        : polygon({p1, p2, p3})
    {

    }

    // rectangle
    rectangle::rectangle(const coord2d &bottom_left, double width, double height)
        : polygon({bottom_left,
                   bottom_left + coord2d(width, 0),
                   bottom_left + coord2d(width, height),
                   bottom_left + coord2d(0, height)})
    {
    }

    // square
    square::square(const coord2d &bottom_left, double width)
        : rectangle(bottom_left, width, width)
    {
    }

    // drawing
    drawing::drawing() 
    {

    }

    drawing::~drawing()
    {
        // Release the memory of each (previously dynamically allocated) shape
        for (shape *s : shapes)
            delete s;
    }

    void drawing::add_shape(shape *s)
    {
        shapes.push_back(s);
    }

    void drawing::move_all(const coord2d &movement)
    {
        for (shape *s : shapes)
            s->move(movement);
    }
    std::vector<shape *> &drawing::get_shapes()
    {
        return shapes;
    }
}