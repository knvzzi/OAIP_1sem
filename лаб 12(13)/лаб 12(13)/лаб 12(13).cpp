#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char t[200], s1 = '(', s2 = ')';
	int k;
	cout << "Input string: ";
	cin >> t;
    k = strlen(t);
    for (int i = 0; i < k; i++)
    {
        if (t[i] == '(')
        {
            s1 = i;
            
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (t[i] == ')')
        {
            s2 = i;
           
        }
    }

    for (int i = 0; i < s1; i++)
    {
        cout << t[i];
    }

    for (int i = (s2 + 1); i < k; i++)
    {
        cout << t[i];
    }
}
