#include <iostream>
#include <cmath>
using namespace std;

bool isPythagoras(int sisiA, int sisiB, int sisiC)
{

    // Menggunakan algoritam Bubble sort untuk mencari Sisi Terbesar/Sisi Miring (sisi[2])
    int sisi[3] = {sisiA, sisiB, sisiC};
    int n = sizeof(sisi) / sizeof(sisi[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (sisi[j] > sisi[j + 1])
            {
                int temp = sisi[j];
                sisi[j] = sisi[j + 1];
                sisi[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << sisi[i] << endl;
    }

    int nilaiPythagoras = (sisi[0] * sisi[0]) + (sisi[1] * sisi[1]);
    int nilaiHypotenuse = sisi[2] * sisi[2];

    cout << "Nilai Pythagoras (a^2 + b^2) = " << nilaiPythagoras << endl;
    cout << "Nilai c^2 = " << nilaiHypotenuse << endl;

    return (nilaiPythagoras == nilaiHypotenuse);
}

int main()
{
    int sisiA;
    int sisiB;
    int sisiC;

    cout << "Input Sisi A: ";
    cin >> sisiA;
    cout << "Input Sisi B: ";
    cin >> sisiB;
    cout << "Input Sisi C: ";
    cin >> sisiC;

    if (isPythagoras(sisiA, sisiB, sisiC))
    {
        cout << "Termasuk Triple Pythagoras" << endl;
    }
    else
    {
        cout << "Tidak Termasuk Triple Pythagoras" << endl;
    }

    return 0;
}