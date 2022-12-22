#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    int x ;
    float res = 0;
    cout << "Enter x = " << endl;
    cin >> x ;
    for (int i = 1; i <= 10; i++)
    {
        res += pow(double(x),2) / (4 * pow(double(i),2) - 1) ;
    }
    cout << res << endl;
    system("pause");
    return 0;
}
