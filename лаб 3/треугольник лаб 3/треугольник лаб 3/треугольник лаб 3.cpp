#include <iostream>
#include <iomanip> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Потоковый способ\n";
	cout << "Введите символ "; cin >> c;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	/*Задание1 форматированный способ*/
	cout << "Форматированный способ\n";
	cout << "Введите символ ";
	char lett;
	scanf_s(" %c", &lett);
	printf("    %c\n", lett);
	printf("   %c%c%c\n", lett, lett, lett);
	printf("  %c%c%c%c%c\n", lett, lett, lett, lett, lett);
	printf(" %c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett);
	printf("%c%c%c%c%c%c%c%c%c\n", lett, lett, lett, lett, lett, lett, lett, lett, lett);
}