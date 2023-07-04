#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    srand((unsigned)time(NULL));

    const int N = 100;
    int A[N], B[N], size, col = 0, i, j;
    cin >> size;

    int* pA = A;

    cout << "Массив А: ";

    for (i = 0; i < size; i++) {

        *(pA + i) = rand() % 99;
        cout << *(pA + i) << "\t";
    }

    cout << endl<<"Массив B: ";

    int* pB = B;

    for (i = 0; i < size; i++) {

        *(pB + i) = rand() % 99;
        cout << *(pB + i) << "\t";
    }

    for (i = 0; i < size; i++) {

        for (j = 0; j < size; j++) {

            if (pA[i] == pB[j]) {

                col++;

            }

        }

    }

    cout <<endl<< "Колличество пар элементов: " << col;
}
