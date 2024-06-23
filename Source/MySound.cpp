#include <Windows.h>
#include "MySound.h"

int Pow(int n, int m)
{
    int result;

    for (result = 1; m != 0; n *= n)
    {
        if (m & 1)
        {
            result *= n;
        }

        m >>= 1;
    }

    return result;
}

void PlayBeep(int index, int octave, float seconds)
{
    const float datas[12] =
    {
        32.7032,    // C
        34.6478,    // C#
        36.7081,    // D
        38.8909,    // D#
        41.2034,    // E
        43.6535,    // F
        46.2493,    // F#
        48.9991,    // G
        51.913,     // G#
        55,         // A
        58.2705,    // A#
        61.7354,    // B
    };

    int s = datas[index] * Pow(2, octave - 1);

    Beep(s, seconds * 1000);
}
