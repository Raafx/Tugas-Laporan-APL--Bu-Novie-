#include <iostream>
using namespace std;

int main()
{
    int matriks[2][3] = {{6, 7, 8}, {1, 5, 3}};

    // Menghitung rata-rata

    int sum = 0;
    int length = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            length += 1;
            sum += matriks[i][j];
        }
    }

    float mean = sum / length;

    cout << "Rata-rata matriks = " << mean << endl;

    // Menghitung nilai max

    // menginisiasi nilai max dengan elemen pertama pada matriks
    int max = matriks[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriks[i][j] > max)
            {
                max = matriks[i][j];
            }
        }
    }

    cout << "Nilai max matriks = " << max << endl;

    // Menghitung nilai min

    // menginisiasi nilai min dengan elemen pertama pada matriks
    int min = matriks[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (matriks[i][j] < min)
            {
                min = matriks[i][j];
            }
        }
    }

    cout << "Nilai min matriks = " << min << endl;
    return 0;
}