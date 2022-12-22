#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, r, t, res;
    const double pi = 3.14159265;
    cout << "Enter a = " << endl;
    cin >> a ;
    cout << "Enter r = " << endl;
    cin >> r ;
    res = (( 2 * pi * r * a ) / 30) ;
    cout << res ;
    return 0;
}

