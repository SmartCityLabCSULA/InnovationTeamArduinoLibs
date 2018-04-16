#include "range_policy.h"

double RangePolicy::velocity(double headway) {
    if (0 <= headway && headway <= h_stop_)
    {
        return 0;
    }
    else if (h_stop_ < headway && headway < h_go_)
    {
        return v_max_ / 2 * (1 - cos(M_PI * (headway - h_stop_)/(h_go_ - h_stop_)));
    }
    else
    {
        return v_max_;
    }
}

double RangePolicy::get_h_stop() {
    return h_stop_;
}

void RangePolicy::set_h_stop(double hst) {
    h_stop_ = hst;
}

double RangePolicy::get_h_go() {
    return h_go_;
}

void RangePolicy::set_h_go(double hgo) {
    h_go_ = hgo;
}

double RangePolicy::get_vel_max() {
    return v_max_;
}

void RangePolicy::set_vel_max(double vmax) {
    v_max_ = vmax;
}
