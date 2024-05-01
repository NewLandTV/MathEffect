#include <Windows.h>

int Pow(int n, int m);
void PlayBeep(int index, int octave, float seconds);

int main()
{
    while (true)
    {
        // Finis Vitae OST - Decarbonist
        for (int i = 0; i < 8; i++)
        {
            PlayBeep(0, 4, 0.6f);
            Sleep(67);
            PlayBeep(2, 4, 0.1f);
            Sleep(66);
            PlayBeep(0, 4, 0.49f);
            Sleep(10);
            PlayBeep(2, 4, 0.3f);
            Sleep(34);
        }

        Sleep(334);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(6, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(5, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(6, 4, 0.6);
        Sleep(399);
        PlayBeep(5, 4, 0.6); 
        Sleep(66);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(3, 4, 0.3);
        Sleep(34);
        PlayBeep(2, 4, 0.3);
        Sleep(34);
        PlayBeep(0, 4, 0.3);
        Sleep(34);
        PlayBeep(6, 4, 0.6);
        Sleep(399);
        PlayBeep(5, 4, 0.6);
        Sleep(66);
        PlayBeep(2, 4, 0.666);
    }

    return 0;
}

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

    if (index + 48 == '.')
    {
        index = 10;
    }

    int s = datas[index] * Pow(2, octave - 1);

    Beep(s, seconds * 1000);
}
