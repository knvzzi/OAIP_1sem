#include <iostream>
using namespace std;

int num1()
{
    setlocale(LC_ALL, "RUS");
    srand((unsigned)time(NULL));

    const int N = 100;
    int arr[N], size, average, sum = 0, i;
    cin >> size;

    int* pArr = arr;

    for (i = 0; i < size; i++) {

        *(pArr + i) = rand() % 99;
        cout << *(pArr + i)<<"\t";
    }

    for (i = 0; i < size; i++) {

        sum += pArr[i];
    }

    average = sum / 5;
    
    cout << endl <<"Среднее арифметическое: "<< average << endl;

    cout << "Больше среднего арифметического: "<<"\t";

    for (i = 0; i < size; i++) {

        if (pArr[i] > average) {

            cout << pArr[i] << "\t";
        }
    }

    cout <<endl<< "Меньше среднего арифметического: "<<"\t";

    for (i = 0; i < size; i++) {

        if (pArr[i] < average) {
            
            cout << pArr[i] << "\t";
        }
    }

    return 0;
}

int num2()
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

    cout << endl << "Массив B: ";

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

    cout << endl << "Колличество пар элементов: " << col;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //num1();
    num2();
}