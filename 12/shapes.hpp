#ifndef __leic_shapes_hpp__
#define __leic_shapes_hpp__
#include "coord2d.hpp"
#include <vector>

namespace leic
{
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
        virtual ~shape();
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
        ellipse(const coord2d &c, double rx, double ry);

        //! Get X axis radius.
        //! @return Value for radius in the X axis direction.
        double radius_x() const;
     
        //! Get Y axis radius.
        //! @return Value for radius in the Y axis direction.
        double radius_y() const;
        coord2d center() const override final;
        double area() const override final; 
        void move(const coord2d &movement) override final;
    };

    //! Circle shape.
    class circle final : public ellipse
    {
    public:
        //! Constructor.
        //! @param c Center.
        //! @param r  Radius.
        circle(const coord2d &c, double r);
    };
    class polygon : public shape
    {
    public:
        //! Constructor.
        //! @param v Vector of points.
        polygon(const std::vector<coord2d>& v); 
        //! Get number of points
        //! @return The number of points in the polygon.
        int number_of_points() const;
        double area() const override final;
        coord2d center() const override final;
        void move(const coord2d &movement) override final;
    private:
        //! Vector of points.
        std::vector<coord2d> points;
    };
    //! Triangle.
    class triangle final : public polygon
    {
    public:
        triangle(const coord2d &p1, const coord2d &p2, const coord2d &p3);
    };
    //! Rectangle.
    class rectangle : public polygon
    {
    public:
        //! Constructor.
        rectangle(const coord2d &bottom_left, double width, double height);
    };

    //! Square.
    class square final : public rectangle
    {
    public:
        square(const coord2d &bottom_left, double width);
    };
    //! Drawing, a collection of  shapes.
    class drawing final
    {
    private:
        //! Vector holding dynamically allocated shapes.
        //! Shapes must be released with delete by
        //! the drawing destructor.
        std::vector<shape *> shapes;
    public:
        //! Construtor.
        drawing();

        //! Destructor.
        //! It will call delete for all shapes in the vector.
        ~drawing();
        
        //! Add a shape.
        //! @param s Shape to add (should be dynamically allocated).
        void add_shape(shape *s);
        
        //! Move all shapes in the drawing.
        //! @param movement Movement.
        void move_all(const coord2d &movement);

        //! Get shapes in drawing.
        std::vector<shape *>& get_shapes();
    };
}
#endif