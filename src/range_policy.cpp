#include "range_policy.h"

double RangePolicy::velocity(double headway)
{
    if (0 <= headway && headway <= _h_stop)
    {
        return 0;
    }
    else if (_h_stop < headway && headway < _h_go)
    {
        return _v_max / 2 * (1 - cos(M_PI * (headway - _h_stop)/(_h_go - _h_stop)));
    }
    else
    {
        return _v_max;
    }
}

double RangePolicy::velocity(double v)
{

}

double RangePolicy::get_velocity()
{

}

void RangePolicy::set_velocity()
{

}

double RangePolicy::get_h_stop()
{

}

void RangePolicy::set_h_stop()
{

}

double RangePolicy::get_h_go()
{

}

void RangePolicy::set_h_go()
{

}

double RangePolicy::get_vel_max()
{

}

void RangePolicy::set_vel_max()
{

}
