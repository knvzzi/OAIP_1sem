#include <iostream>
using namespace std;
//Проверить, есть ли в нём отрицательные элементы. Если есть, то найти наибольшее значение k, при котором A[k] < 0
int funk1() 
{
    setlocale(LC_ALL, "Rus");
    int n, maxi = 0;
    cout << "vvedite kol-vo elementov" << endl;
    cin >> n;
    int* A = new int[n];
    if (!(A = (int*)malloc(n * sizeof(int))))
    {
        cout << "Нету свободной памяти" << endl;
    }
    cout << "vvedite elementi" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] < 0)
            cout << A[i] << " ";

    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            if (i > maxi)
                maxi = i;
        }
    }
    cout << maxi + 1 << " ";


    return  0;
}
//добиться того, чтобы наибольший элемент оказался в верхнем левом углу
int funk2() {
    setlocale(LC_ALL, "Rus");
    int mat[5][5] = { {3, 2, 5, 7, 1}, {2, 6, 8, 1, 4}, {1, 4, 3, 6, 3}, {5, 7, 0, 8, 3}, {5, 3, 4, 5, 9} };

    cout << "До" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < 5 / 2; i++)
    {
        swap(mat[4 - i][4 - i], mat[i][i]);

    }

    cout << "После" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    //funk1();
    funk2();
}