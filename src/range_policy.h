#ifndef RANGE_POLICY_H
#define RANGE_POLICY_H

#include <cmath>

class RANGE_POLICY_H
{
public:
    RangePolicy(double h_st, double h_go, double v_max)
        : _h_stop(h_st)
        , _h_go(h_go)
        , _v_max(v_max)
        { _velocity = 0.0; }
    double velocity(double v);

    double get_velocity();
    void set_velocity();

    double get_h_stop();
    void set_h_stop();

    double get_h_go();
    void set_h_go();

    double get_vel_max();
    void set_vel_max();

private:
    double _h_stop;
    double _h_go;
    double _v_max;
    double _velocity;
};

#endif // RANGE_POLICY_H
