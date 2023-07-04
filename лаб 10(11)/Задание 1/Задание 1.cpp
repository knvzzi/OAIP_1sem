#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RUS");

    int A, one = 0, zero = 0;
    char tmp[33];

    cout << "Введите число: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число А в двоичном виде = " << tmp << endl;

    while (A) 
    {
        if (A & 1)
            one++;
        else
            zero++;
        A >>= 1;
    }

    if (zero > one) 
    {
        cout << "В числе А битов равных нулю больше, чем равных единице на " << (zero - one) << endl;
    }
    else 
    {
        if (zero < one)
            cout << "В числе А битов равных единице больше, чем равных нулю на " << (one - zero) << endl;
        else
            cout << "В числе А битов равных единице равно числу битов равных нулю." << endl;
    }

    system("pause");
}