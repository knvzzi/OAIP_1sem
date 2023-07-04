#include <iostream>

using namespace std;
//вычислить количество положительных элементов массива и сумму элементов массива, расположенных после последнего элемента, равного нулю.
int num1() {
    int k;
    int sum = 0;
    int nullIndex = 0;

    cout << "Введите количество элементов" << endl;
    cin >> k;

    int* arrayNums = new int[k];

    if (!(arrayNums = (int*)malloc(k * sizeof(int))))
    {
        cout << "Нету свободной памяти" << endl;
    }


    for (int i = 0; i < k; i++)
    {
        cin >> arrayNums[i];
    }
    cout << "положительные элементы:" << endl;
    for (int i = 0; i < k; i++)
    {
        if (arrayNums[i] > 0) {
            cout << arrayNums[i] << " ";
        }

        if (arrayNums[i] == 0)
        {
            nullIndex = i;
        }
    }

    for (int i = nullIndex; i < k; i++)
    {
        sum += arrayNums[i];
    }

    cout << endl;

   /* cout << "Сумма элементов после последнего 0 = " << sum;*/

    free(arrayNums);

    return 0;
}
//Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.
int num2() {
    int row = 0, col = 0, flag = 0;
    cout << "Введите количество столбцов" << endl;
    cin >> col;

    cout << "Введите количество строк" << "\n";
    cin >> row;

    int** arrayNums = new int* [col];

    for (int i = 0; i < col; i++)
    {
        arrayNums[i] = new int[row];
        for (int j = 0; j < row; j++)
        {
            cin >> arrayNums[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arrayNums[i][j] == 0 && !flag)
            {
                cout << "Номер строки с нулевым элементом = " << (i + 1);

                flag = 1;
            }
        }
    }

    delete[] arrayNums;
    return 0;
}



int main()
{
    setlocale(LC_ALL, "rus");

    //num1();
    num2();
}