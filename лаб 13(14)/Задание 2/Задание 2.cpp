#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    const int n = 3, m = 4;
    int b = 0, d = 1, i = 0, j=0;
    int A[n][m] =
    {
        { -1, -2, -3, -4},
        {-5, 6, -7, -8},
        {-9, 10, 11, 12}
    };

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] > 0)
            {
                cout << "В строке " << (i + 1) << " есть положительный элемент" << endl;
                
                for (int j = 0; j < m; j++)
                {
                    int* pI = &i;
                    A[*pI-1][j] *= (-1);
                    cout << A[*pI-1][j] << " ";
                    
                }
                cout << endl;
                break;
            }
           
            
        }
        
    }
    
   
}


/*const int N = 100, M= 100;
    int A[N][M], sizei, sizej, i, j;
    cin >> sizei;
    cin >> sizej;

    for (i = 0; i < sizei; i++)
    {
        for(j = 0; j < sizej; j++)

        *(*(A + i)+j) = rand() % 99;
        cout << *(*(A + i) + j) << "\t";
    }*/