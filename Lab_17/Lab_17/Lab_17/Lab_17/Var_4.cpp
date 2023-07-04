#include<iostream>
using namespace std;
int main2(int* arr)
{
    int s = 0;
    for (int i = 0; i < 15; i++)
        if (arr[i] % 2 != 0)
            s += arr[i];
    for (int i = 0; i < 15; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return s;
}
void main1(int n, int m, int** arr1)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] > 0) {
                cout << "Номер строки = " << i + 1 << endl;
                arr1[i - 1][j] = -arr1[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }
}
void main()
{
    setlocale(0, "");
    int* arr = new int[15];
    for (int i = 0; i < 15; i++)
        arr[i] = rand() % 200;
    cout << "Сумма нечетных элементов = " << main2(arr) << endl;
    delete arr;
    arr = nullptr;


    int m, n;
    cout << "введите n";
    cin >> n;
    cout << "введите m";
    cin >> m;
    int** arr1 = new int* [n];
    for (int i = 0; i < n; i++)
        arr1[i] = new int[m];

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Элемент[" << i + 1 << "." << j + 1 << "]: ";
            cin >> arr1[i][j];
        }
    }
    main1(n, m, arr1);
}