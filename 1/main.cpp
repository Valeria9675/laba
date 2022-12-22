#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    COORD c;
    HANDLE hnd = GetStdHandle(STD_OUTPUT_HANDLE);
    float A[10][10], B[10][10];
    int i, j, n, i2,j2,i3,j3;

    //¬вод исходных данных
    cout<< "Input the size of the matrix n" << endl;
    cin>> n;
    cout<<"Input matrix A" << endl;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            c.X = 5 + j * 5;
            c.Y = 3 + i;
            SetConsoleCursorPosition(hnd, c);
            cin >> A[i][j];
        }
    }
        //ќработка данных
        for(i = 0; i < n; i++)
        {
           for(j = 0; j < n; j++)
           {
              if (A[i][j] < 0)
              {
                B[i][j] = 2 * A[i][j];
              }
              else
              {
                  B[i][j] = A[i][j];
              }
            }
        }
        cout<<"Input matrix B"<< endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                c.X = 5 + j * 5;
                c.Y = n + 4 + i;
                SetConsoleCursorPosition(hnd, c);
                cout << B[i][j];
            }
        }
         return 0;
}
