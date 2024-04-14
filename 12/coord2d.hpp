
#ifndef __leic_coord2d_hpp__
#define __leic_coord2d_hpp__

#include <iostream>

namespace leic
{
    class coord2d
    {
    public:
        coord2d();
        coord2d(double vx, double vy);
        coord2d(const coord2d &c);
        double get_x() const;
        double get_y() const;
        void set_x(double vx);
        void set_y(double vy);
        coord2d &operator+=(const coord2d &c);
        coord2d operator+(const coord2d &c) const;
        coord2d &operator*=(double f);
        coord2d operator*(double f);
    private:
        double x;
        double y;

    };
    std::ostream &operator<<(std::ostream &out, const coord2d &c);
}
#endif