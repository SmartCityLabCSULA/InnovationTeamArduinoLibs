#ifndef HW_ENCODER_H
#define HW_ENCODER_H

namespace encoder{
// Making this as a class because that's what the Arduino IDE requires
class Encoder
{
  public:
    Encoder();
    double ticks_to_velocity(double, double, int, int);
}
// Converts the number of encoder ticks (pulses) into a velocity. This is for a
// simple incremental rotary encoder (NOT a quadrature encoder).
//
// Parameters:
// @circumf (double): circumference of the wheel
// @frequency (double): sampling(?) frequency
// @tickss (int): number of ticks
// @pulse_per_rev (int): number of pulses that constitutes one full revolution
//      of the wheel
//
// Returns:
// velocity (double)
double ticks_to_velocity(double circumf, double freq, int ticks, int pulse_per_rev)
{
    // NOTE: need to add
    return circumf * freq / (double)(pulse_per_rev * ticks);
}
} // namespace encoder
#endif // HW_ENCODER_H
