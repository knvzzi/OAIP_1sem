#include <iostream>
using namespace std;

void Foo(int a) // передача параметров по значению
{
    a++; // изменение копии переменной a из функции main

    cout << " В Foo: a = " << a << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a = 1;

    cout << " До Foo: a = " << a << endl;

    Foo(a); // вызов функции 

    cout << " После Foo: a = " << a << endl;

    return 0;
}

