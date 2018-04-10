#include "range_policy.h"

RangePolicy::velocity(double headway)
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
