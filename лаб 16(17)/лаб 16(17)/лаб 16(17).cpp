#include<iostream>
#include<ctime>;

using namespace std;

int funk1(int* pA)
{
    int sum = 0;

    for (int i = 0; i < 15; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum += *(pA + i);
        }
    }

    return sum;
}

int funk2(int** A, int** B, int** C, int n, int m)
{
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == 0 && B[j][i] == 0)
            {
                flag = true;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << "Матрица имеет нулевые значения";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < m; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }

    }
    return **C;
}

int main()
{
    //Задание 1

    setlocale(LC_CTYPE, "Russian");

    int A[15];

    cout << "Введите элементы массива: " << endl;

    for (int i = 0; i < 15; i++)
    {
        cin >> A[i];
    }

    cout << "Сумма чётных элементов массива равна " << funk1(A) << endl;

    //Задание 2

    srand(time(0));

    int n, m;

    cout << "\nВведите n: ";
    cin >> n;
    cout << "Введите m: ";
    cin >> m;

    cout << "\nПервая матрица:" << endl;
    int** matrA = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrA[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrA[i][j] = rand() % 5;
            cout << matrA[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Вторая матрица:" << endl;

    int** matrB = new int* [m];
    for (int i = 0; i < m; i++)
    {
        matrB[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrB[i][j] = rand() % 5;
            cout << matrB[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    int** matrC = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrC[i] = new int[n];
    }

    funk2(matrA, matrB, matrC, n, m);

    cout << "Матрица произведения:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrC[i][j] << "\t";
        cout << endl;
    }
}