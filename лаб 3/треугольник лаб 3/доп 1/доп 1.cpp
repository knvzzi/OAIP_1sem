#include <iostream>
#include <iomanip> 
#include <stdio.h>
#include<conio.h>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std; cout << "Доп1Вар2\n";
    char c, probel;
    probel = ' ';
    cout << "Потоковый способ\n";
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

    cout << setw(48) << setfill(probel) << probel;
    cout << setw(14) << setfill(c) << c << endl;
    cout << setw(49) << setfill(probel) << probel;
    cout << setw(12) << setfill(c) << c << endl;
    cout << setw(50) << setfill(probel) << probel;
    cout << setw(10) << setfill(c) << c << endl;
  /*Доп1Вар2 форматированный способ*/
	cout << "Форматированный способ\n";
	cout << "Введите символ ";
	char lett;
	scanf_s(" %c", &lett);
	printf("   %c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
	printf("  %c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
	printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf("  %c%c%c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
    printf("   %c%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett, lett);
}