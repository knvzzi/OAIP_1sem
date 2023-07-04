#include <iostream>

using namespace std;
//вычислить произведение отрицательных элементов массива и сумму положительных элементов массива, расположенных после максимального элемента
int funk1() {
    setlocale(LC_ALL, "Rus");
    int* A; int i, n, max = 0, sum = 0, pr = 1, max1 = 0;

    cout << "Введите размер массива, n<30 " << endl;
    cin >> n;

    if (!(A = (int*)malloc(n * sizeof(int))))
    {
        puts("Not enough memory");

    }
    cout << "Введите элементы массива " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    printf("\nМассив: \n", i + 1);
    for (i = 0; i < n; i++)
        printf("%d ", *(A + i));
    printf("\n");

    for (i = 0; i < n; i++) {
        if (A[i] < 0)
            pr = pr * A[i];
    }
    cout << "proizvedenie otrizatelnix:" << pr << endl;

   /* for (i = 0; i < n; i++) {
        if (A[i] > max)
            max = i - 1;
    }
    for (i = max; i < n; i++) {
        sum = (sum + A[i]);
    }
    cout << "suma polozitelnix posle max:" << sum;*/

    return 0;

}

//Найти сумму наименьших элементов ее нечетных строк и наибольших элементов ее четных строк.

int funk2() {

    setlocale(LC_ALL, "rus");

    int arrayNums[4][4] = { {3, 2, 4, 5}, {1, 2, 3, 5}, {6, 7, 9, 8}, {0, 0, 0, 1} };
    int min = 1000;
    int max = 0;
    int* numbers = new int[4];
    int index = 0;
    int result = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            cout << arrayNums[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 4; j++) {
                if (max < arrayNums[i][j])
                {
                    max = arrayNums[i][j];
                }
            }

            numbers[index] = max;
        }
        else {
            for (int j = 0; j < 4; j++) {
                if (min > arrayNums[i][j])
                {
                    min = arrayNums[i][j];
                }
            }

            numbers[index] = min;
        }

        index++;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        result += numbers[i];
    }

    cout << result - 1 << endl;



    return 0;
}

int main() {
    //funk1();
    funk2();
}