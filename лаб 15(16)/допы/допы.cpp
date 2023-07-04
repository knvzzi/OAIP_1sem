#include <iostream>
#include <Windows.h>

using namespace std;

void v4_1(int**, int&);
void v4_2(char*);

void v2_1(int**, int&, int&);
void v2_2(char[]);

void v7_1(int**, int&, int&, int&);
void v7_2(char*);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int** matrix;
    char action = '0';
    int n, m, d;
    char s[1000];
    while (action != '/')
    {
        cout << "Введите вариант (2 4 7). Для выхода введите ." << endl;
        cin >> action;
        switch (action)
        {
        case '4':
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case '1':
                cout << "n = ";
                cin >> n;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[n];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                        cin >> matrix[i][j];
                v4_1(matrix, n);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            case'2':
                cout << "введте строку" << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                gets_s(s);
                v4_2(s);
                break;
            }
            break;



        case '2':
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case '1':
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                v2_1(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            case'2':
                cout << "введте строку" << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                gets_s(s);
                v2_2(s);
                break;
            }
            break;
        case '7':
            cout << "Введите задание" << endl;
            cin >> action;
            switch (action)
            {
            case '1':
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                cout << "d = ";
                cin >> d;
                matrix = new int* [n];
                for (int i = 0; i < n; i++)
                    matrix[i] = new int[m];
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                v7_1(matrix, n, m, d);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            case'2':
                cout << "введте строку" << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                gets_s(s);
                v7_2(s);
                break;
            }
            break;




        case'.':
            cout << "exit" << endl;
            break;
        default:
            cout << "error" << endl;
        }
    }
}
//2
void v2_2(char s[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            s[i] = '?';
        else if (s[i] >= 'а' && s[i] <= 'я')
            s[i] -= 32;
    }
    cout << s << endl;
}
void v2_1(int** matrix, int& n, int& m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == 0 && j == 0)
                break;
            else
                matrix[i][j] ++;
    }

        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
//4
void v4_1(int** matrix, int& n)
{

    cout << endl;
    for (int i = 0; i < n; i++)
        matrix[0][i] -= matrix[n - 1][i];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] -= matrix[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void v4_2(char* s)
{
    int sum = 0;
    char c;
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        c = *(s + i);
        if (c >= '0' && c <= '9')
            sum += c - '0';
    }
    cout << "sum = " << sum << endl;
}
//7
void v7_1(int** matrix, int& n, int& m, int& d)
{
    int countZ = 0, countM = 0, countP = 0;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == d)
            {
                cout << i + 1 << endl;
                goto b;
            }
        }
    }
b:cout << endl;
}

void v7_2(char* s) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum = 0;
    char c;
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        c = *(s + i);
        if (c != ' ')
        {
            sum += (int)c;
        }
        else
        {
            cout << sum << " ";
            sum = 0;
        }
    }
    if (sum != 0)
        cout << sum;
    cout << endl;
}
