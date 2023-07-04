#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    char q;

    cout << "Введите количество строк" << endl;
    cin >> n;

    cout << "Введите окончание" << endl;
    cin >> q;

    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Введите строку" << endl;
        cin >> str;

        if (str[str.size() - 1] == q)
        {
            cout << "Окончание верное" << endl << endl;
        }
        else if (str[str.size() - 1] != q)
        {
            cout << "Окончание не верное" << endl << endl;
        }
    }
}