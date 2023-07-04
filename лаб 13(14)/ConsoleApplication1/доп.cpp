#include <iostream>

using namespace std;

int f2() {
    int m[32][32];
    int n;
    cout << "Введите n - ";
    cin >> n;
    cout << endl << "Матрица - " << endl;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            m[i][j] = 1 + (j + 1 + i + 1) % n;

            cout << " " << *(*(m + i) + j);
            if (j == n - 1)
                printf("\n");
        }
    }
    return 0;
}

int funk3()
{
    int mat[5][5] = { {1, 3, 5, 7, 1}, {3, 3, 8, 1, 4}, {1, 4, 9, 0, 2}, {5, 7, 9, 8, 2}, {5, 3, 4, 5, 2} };
    int max = 0;
    int index = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) 
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
                mat[index][index] = max;

                index--;
            }
        }
    }

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

int funk1() {
    int mat[5][5] = { {1, 2, 5, 7, 1}, {2, 6, 8, 1, 4}, {1, 4, 9, 6, 3}, {5, 7, 3, 8, 3}, {5, 3, 4, 5, 3} };

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
        swap(mat[i][i], mat[4 - i][4 - i]);
        swap(mat[4 - i][i], mat[i][4 - i]);
        swap(mat[1 - i][i], mat[4 - i][3 - i]);
        //swap(mat[i][1 - i], mat[3 - i][4 - i]);
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
    setlocale(LC_ALL, "RUSSIAN");
    cout << endl;
    //f2();
    funk3();
    //funk1();
}
