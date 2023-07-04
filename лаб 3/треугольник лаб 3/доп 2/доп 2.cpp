#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main(void)
{
    /*задание 1 потоковый способ*/
    setlocale(LC_ALL, "RU");
    char c, probel;
    cout << "Потоковый способ\n";
    probel = ' ';
    cout << "Введите символ ";
    cin >> c;
    cout << setw(50) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(49) << setfill(probel) << probel;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(48) << setfill(probel) << probel;
    cout << setw(14) << setfill(c) << c << endl;
    cout << setw(47) << setfill(probel) << probel;
    cout << setw(16) << setfill(c) << c << endl;
    /*задание 1 форматированный способ*/
    cout << "Форматированный способ\n";
    cout << "Введите символ ";
    char lett;
    scanf_s(" %c", &lett);
    printf("   %c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf("  %c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
}