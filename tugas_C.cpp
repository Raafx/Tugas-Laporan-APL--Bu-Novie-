#include <iostream>
#include <cmath>
using namespace std;

int hitungPangkat(int bilangan, int pangkat)
{

    if (pangkat == 0)
    {
        return 1;
    }
    return bilangan * hitungPangkat(bilangan, pangkat - 1);
}

int main()
{
    int bilangan;
    int pangkat;

    cout << "Input Bilangan: ";
    cin >> bilangan;
    cout << "Input Pangkat: ";
    cin >> pangkat;

    int hasilPangkat = hitungPangkat(bilangan, pangkat);

    cout << "Hasil dari " << bilangan << " Pangkat " << pangkat << " = " << hasilPangkat << endl;

    return 0;
}