#include <iostream>
#include <cmath>
using namespace std;

void jenisSegitiga(int sisiA, int sisiB, int sisiC)
{
    if (sisiA + sisiB < sisiC || sisiB + sisiC < sisiA || sisiA + sisiC < sisiB)
    {
        cout << "Bukan Segitiga" << endl;
    }
    else if (sisiA * sisiA + sisiB * sisiB == sisiC * sisiC ||
             sisiB * sisiB + sisiC * sisiC == sisiA * sisiA ||
             sisiC * sisiC + sisiA * sisiA == sisiB * sisiB)
    {
        cout << "Segitiga Siku Siku" << endl;
    }
    else if (
        (sisiA == sisiB && sisiC != sisiA && sisiC != sisiB) ||
        (sisiB == sisiC && sisiA != sisiB && sisiA != sisiC) ||
        (sisiC == sisiA && sisiB != sisiC && sisiB != sisiA)

    )
    {
        cout << "Segitiga Sama Kaki" << endl;
    }
    else if (sisiA != sisiB && sisiB != sisiC && sisiA != sisiC)
    {
        cout << "Segitiga Sembarang" << endl;
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