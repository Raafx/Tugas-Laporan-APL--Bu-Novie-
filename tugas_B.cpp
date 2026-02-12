#include <iostream>
#include <cmath>
using namespace std;

float hitungPythagoras(int sisiA, int sisiB, int sisiC)
{
    if (sisiA * sisiA + sisiB * sisiB == sisiC * sisiC ||
        sisiB * sisiB + sisiC * sisiC == sisiA * sisiA ||
        sisiC * sisiC + sisiA * sisiA == sisiB * sisiB)
    {
        cout << "Segitiga Siku Siku" << endl;
    }
}

int main()
{
    long sisiA;
    long sisiB;
    long sisiC;

    cout << "Input Sisi A: ";
    cin >> sisiA;
    cout << "Input Sisi B: ";
    cin >> sisiB;
    cout << "Input Sisi C: ";
    cin >> sisiC;

    jenisSegitiga(sisiA, sisiB, sisiC);

    return 0;
}