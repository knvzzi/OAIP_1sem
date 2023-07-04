#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    string str, str2 = "";
    int flag = 0;
    char ch = 'a';
    
    cout << "Введите слова:";
    getline(cin, str);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        char* pCh = &ch;

        for (int i = 0; i <= str.size(); i++)
        {
            if (str[i] == ' ' && str[i + 1] == *pCh)
            {
                for (int j = i + 1; j <= str.size(); j++)
                {
                    if (str[j] == ' ')
                    {
                        for (int k = i + 1; k < j; k++)
                        {
                            str2 += str[k];
                            str[k] = '0';
                        }
                        str2 += ' ';
                        break;
                    }
                }
            }
        }
    }

    cout <<"Строка в алфавитном порядке: "<<str2;

}