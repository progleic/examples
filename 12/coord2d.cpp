#include "coord2d.hpp"

namespace leic
{
    coord2d::coord2d() : coord2d(0.0, 0.0)
    {
    }
    coord2d::coord2d(double vx, double vy) : x(vx), y(vy)
    {
    }
    coord2d::coord2d(const coord2d &c) : coord2d(c.x, c.y)
    {
    }
    double coord2d::get_x() const
    {
        return x;
    }
    double coord2d::get_y() const
    {
        return y;
    }
    void coord2d::set_x(double vx)
    {
        x = vx;
    }
    void coord2d::set_y(double vy)
    {
        y = vy;
    }
    coord2d &coord2d::operator+=(const coord2d &c)
    {
        x += c.x;
        y += c.y;
        return *this;
    }
    coord2d coord2d::operator+(const coord2d &c) const
    {
        coord2d r = *this;
        r += c;
        return r;
    }
    coord2d &coord2d::operator*=(double f)
    {
        x *= f;
        y *= f;
        return *this;
    }
    coord2d coord2d::operator*(double f)
    {
        coord2d r = *this;
        r *= f;
        return r;
    }
}
