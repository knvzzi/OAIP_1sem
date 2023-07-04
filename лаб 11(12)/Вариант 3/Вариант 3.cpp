#include <iostream>
int num1()
{
    using namespace std;
    const int N = 100;
    int A[N], B[N], * pArrA = A, * pArrB = B, t, size, k = 0, m = 0;

    cout << "size: ";
    cin >> size;

    cout << "t = ";
    cin >> t;
    cout << endl;

    srand((unsigned)time(NULL));
    cout << "A[i]: ";
    for (pArrA = A; pArrA < A + size; pArrA++)
    {
        *pArrA = rand() % 20;

        if (*pArrA < t) m++;
        cout << *pArrA << " ";
    }
    cout << endl << "m = " << m << endl << "B[i]: ";
    for (pArrB = B; pArrB < B + size; pArrB++)
    {
        *pArrB = rand() % 20;
        if (*pArrB < t) k++;
        cout << *pArrB << " ";
    }
    cout << endl << "k = " << k << endl;
    cout << "===========================" << endl;
    if (k > m) {
        cout << "k > m" << endl;
        cout << "B[i]: ";
        for (pArrB = B; pArrB < B + size; pArrB++)
            cout << *pArrB << " ";
    }
    else if (k < m) {
        cout << "m > k" << endl;
        cout << "A[i]: ";
        for (pArrA = A; pArrA < A + size; pArrA++)
            cout << *pArrA << " ";
    }
    else cout << "m = k";

    return 0;
}

int num2()
{
    using namespace std;
    const int N = 100;
    int C[N], D[N], m, k = 0, j = 0, l = 0;
    int* pArrC = C, * pArrD = D;
    cout << "m = ";
    cin >> m;
    srand((unsigned)time(NULL));
    cout << "C[i]: ";
    for (pArrC = C; pArrC < C + m; pArrC++)
    {
        *pArrC = rand() % 10;
        cout << *pArrC << " ";
    }
    cout << endl << "D[i]: ";
    for (pArrD = D; pArrD < D + m; pArrD++)
    {
        *pArrD = rand() % 10;
        cout << *pArrD << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        if (C[i] > D[i]) k++;
        else if (C[i] < D[i]) j++;
        else l++;
    }
    cout << "C[k] > D[k]: " << k << endl;
    cout << "C[k] < D[k]: " << j << endl;
    cout << "C[k] = C[k]: " << l;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    num1();
    //num2();
}