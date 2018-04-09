#include "schmitt_trigger.h"

int SchmittTrigger::count_pulses(int wave[], int length)
{
    int num_pulses = 0;
    int prev_pulse = wave[1];

    for (int i = 1; i < length; i++)
    {
        if (wave[i] != prev_pulse && wave[i] != 0)
        {
            num_pulses += 1;
        }

    }

    return num_pulses;
}
