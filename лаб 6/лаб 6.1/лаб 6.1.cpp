#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Ввести N ";
    cin >> n;
   
    for (int number = 1; number <= n; number++)
    {
        if (number % 2 == 0 && number % 3 == 0 && number % 5 == 0)
        {
            cout << number << "\n";
        }
    }
}