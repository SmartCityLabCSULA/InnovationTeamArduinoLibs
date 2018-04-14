// Human driver model, taken from
// Optimal control of connected vehicle systems
// Jin I. Ge, Gabor Orosz

#ifndef HUMAN_DRIVER_H
#define HUMAN_DRIVER_H

#include "range_policy.h"

namespace control{

class HumanDriver
{
public:
    HumanDriver(double vmax, double hst, double hgo, double alpha, double beta)
        : _alpha(alpha)
        , _beta(beta)
        , range_policy_(hgo, hst, vmax)
        {}

    double h_dot(double vel_1);
    double v_dot(double vel_1);

    double velocity(double h);

    double get_velocity();
    void set_velocity(double v);

    double get_h_stop();
    void set_h_stop(double hstop);

    double get_h_go();
    void set_h_go(double hgo);

    double get_vel_max();
    void set_vel_max(double vmax);

private:
    RangePolicy range_policy_;

    double _alpha;
    double _beta;
    double _headway;
    double _current_velocity;
    // double _previous_velocity;
};
} // namespace control
#endif // HUMAN_DRIVER_H
