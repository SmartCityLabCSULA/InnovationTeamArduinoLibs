#include "human_driver.h"

namespace control {

double HumanDriver::h_dot(double vel_1) {
    // vel_1 (float): velocity of vehicle in front of this vehicle
    return vel_1 - current_velocity_;
}

double HumanDriver::v_dot(double vel_1, double headway) {
    // vel_1 (float): velocity of vehicle in front of this vehicle
    // headway (float): headway between this vehicle and next
    double vdot = alpha_*(velocity(headway) - current_velocity_);
    return vdot + beta_ * (vel_1 - current_velocity_);
}

double HumanDriver::velocity(double h) {
    return range_policy_.velocity(h);
}

double HumanDriver::get_velocity() {
    return current_velocity_;
}

void HumanDriver::set_velocity(double v) {
    current_velocity_ = v;
}
} // namespace control
