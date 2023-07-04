#include <iostream>
#include <algorithm> 
using namespace std;

int main() 
{
    string arr[11], word;

    int size = 0;
    while (cin >> word) 
    {
        if (word == "stop") break;
        arr[size++] = word;  // Запись слова в массив
    }

    sort(arr, arr + size); // Сортируем 

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
