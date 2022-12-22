#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double x, f, a, b, h ;
    cout << "Enter a = " << endl;
    cin >> a ;
    cout << "Enter b = " << endl;
    cin >> b ;
    cout << "Enter h = " << endl;
    cin >> h ;
    for (float x = a; x<=b; x = x + h)
    {if (x <= 0)
            f = abs(x);
    if ( x<=1 && x>0)
            f = pow(x,3);
        if ( x > 1)
            f = x;
         cout << "f("<< x <<")= " << f<< endl;
    }

    return 0;
}
