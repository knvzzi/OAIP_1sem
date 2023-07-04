//доп 1 вар 1
#include<iostream> 
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int x, y, z;
    int a; a = 0;
    cin >> x >> y >> z;
    x % 5 == 0 ? a = a + x : a = a;
    y % 5 == 0 ? a = a + y : a = a;
    z % 5 == 0 ? a = a + z : a = a;
    a > 0 ? cout << a : cout << "Error";
}







