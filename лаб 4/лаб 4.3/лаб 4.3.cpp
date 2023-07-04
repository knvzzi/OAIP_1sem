#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	puts("Вы из Беларуси? (1 - да, 2 - нет)");
	cin >> a;
	switch (a)
	{
	case 1: { puts("Из города или деревни? (1 - город, 2 - деревня)");
		cin >> a;
		switch (a)
		{
		case 1: puts("Я тоже"); break;
		case 2: puts("Я часто бываю в деревне у своей бабушки"); break;
		}
		break;
	}
	case 2: puts("Очень интересно"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}