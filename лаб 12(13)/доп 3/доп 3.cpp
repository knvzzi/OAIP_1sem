#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    char strFirst[60] = "лимон мама лимон брат";


    char* tempFirst = strtok(strFirst, " ");
    char arr[60][60];
    int i = 0;
    while (tempFirst != NULL)
    {
        strcpy(arr[i], tempFirst);
        i++;
        tempFirst = strtok(NULL, " ");

    }
    int firstCount = i;
    i = 0;


    int temp = 1;
    for (i = 0; i < firstCount; i++)
    {
        for (int j = temp; j < firstCount; j++)
        {
            if (strcmp(arr[i], arr[j]) == 0)
            {
                strcpy(arr[i], " ");
                strcpy(arr[j], " ");

            }
            temp++;
        }
    }

    for (i = 0; i < firstCount; i++)
        cout << arr[i] << endl;
}
