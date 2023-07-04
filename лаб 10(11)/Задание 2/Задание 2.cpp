#include<iostream>
using namespace std;

int main()
{
    //setlocale(LC_ALL, "RUS");
    //int A, n, p; char num[33];
    //cout << "Введите число А ";
    //cin >> A;
    //cout << endl;
    //cout << "Введите c какого бита начинать замену ";
    //cin >> p;
    //cout << endl;
    //cout << "Скольно битов заменяем на 1 ";
    //cin >> n;
    //cout << endl;

    ////Просто вывод числа в двоичном виде
    //_itoa_s(A, num, 2);

    //cout << "Число А в двоичном  виде: " << num << endl;

    ////Создаю маску, одна равна единице, которая сдвинута на p-1 влево
    //unsigned int mask = 1 << p - 1;
    //_itoa_s(mask, num, 2);
    //cout << "Маска: " << num << endl;

    ////Далее идет замена на единицу
    //for (int i = 0; i < n; i++) {
    //    A |= mask;
    //    mask >>= 1;
    //}

    //_itoa_s(A, num, 2);

    //cout << "Итоговое число A: " << num << endl;

    //int copyfromA = (A & mask);

    //_itoa_s(copyfromA, num, 2); 
    //cout << "выделенные биты = \t\t" << num<<"\n";


    setlocale(LC_CTYPE, "Russian");

    unsigned  A, B, bits;
    int c, n, m, p, q;

    cout << "число A: "; 
    cin >> A;

    cout << "количество битов n: "; 
    cin >> n;

    cout << "позиция p в числе А: "; 
    cin >> p;

   

    int maskA = 0;

    for (int i = 1; i <= n; i++) {
        maskA <<= 1;
        maskA++;
    }

    maskA <<= p-n;

    char tmp[255];

    _itoa_s(A, tmp, 2); 
    cout << "A = \t\t" << tmp << "\n";

    

    _itoa_s(maskA, tmp, 2); 
    cout << "maskA = \t\t" << tmp << "\n";


    int copyfromA = (A & maskA) >> p;

    _itoa_s(A | maskA, tmp, 2); 
    cout << "новое число A = \t" << tmp << "\n"<<"\n";

    cout << "число B: "; 
    cin >> B;

    cout << "позиция q в числе В: ";
    cin >> q;

    cout << "Количество битов m: ";
    cin >> m;

    _itoa_s(B, tmp, 2);
    cout << "B = \t\t" << tmp << "\n";

    bits = A;
    c = abs(p - n);
    bits >>= c;         //сдвигаем обратно на р уже вправо чтобы получить в самом начале наши инвертированные биты
    _itoa_s(bits, tmp, 2);
    cout << "Инвертированные биты: "<< tmp <<"\n";
    
    bits <<= (32 - m);             //таким образом мы записываем в переменную bits только 
    bits >>= (32 - m);             //наши инвертированные биты (m битов т.к. так надо по условию)

    _itoa_s(bits, tmp, 2);
    cout << "Выделенные биты: \t" << tmp << "\n";

    bits <<= q;                     //сдвигаем влево на q т.к. надо вставить биты bits с позиции q
    B |= bits;						// ф-ия xor ^= заменяет m битов в b с позиции q нашими битами bits из числа а
    _itoa_s(B, tmp, 2);
    cout << "Новое число B= \t " << tmp;


    return 0;
}