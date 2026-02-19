#include <iostream>
using namespace std;

int main()
{

    int matriksSegitiga[5][5] = {{9, 9, 9, 9, 0},
                                 {9, 9, 9, 0, 1},
                                 {9, 9, 0, 1, 1},
                                 {9, 0, 1, 1, 1},
                                 {0, 1, 1, 1, 1}};
    cout << "Matriks Segitiga Atas dan Bawah: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            cout << matriksSegitiga[i][j] << " ";
        }
    }
    return 0;
}