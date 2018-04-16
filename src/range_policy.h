#ifndef RANGE_POLICY_H
#define RANGE_POLICY_H

#include <cmath>

class RangePolicy
{
 public:
    RangePolicy(double h_st, double h_go, double v_max)
        : h_stop_(h_st)
        , h_go_(h_go)
        , v_max_(v_max)
        { }

    double velocity(double h);

    double get_h_stop();
    void set_h_stop(double hst);

    double get_h_go();
    void set_h_go(double hgo);

    double get_vel_max();
    void set_vel_max(double vmax);

 private:
    double h_stop_;
    double h_go_;
    double v_max_;
};

#endif // RANGE_POLICY_H
