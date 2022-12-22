#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, g, k, f, m ;
    cout << "Enter number n = " << endl;
    cin >> n ;
    switch (n)
    {
    case 1:
        cout << "R" ;
        cout << "Enter radius R = " << endl;
        cin >> g;
        cout << "D = " << g*2 << endl;
        cout << "L = " << g*2*M_PI << endl;
        cout << "S = " << M_PI*pow(g,2)<< endl;
        break;
    case 2:
        cout << "D" ;
         cout << "Enter radius D = " << endl;
        cin >> k;
        cout << "R = " << k / 2 << endl;
        cout << "L = " << k * M_PI << endl;
        cout << "S = " << M_PI*pow(k / 2,2)<< endl;
        break;
    case 3:
        cout << "L" ;
        cout << "Enter radius L = " << endl;
        cin >> f;
        cout << "R = " << f /(2 * M_PI)  << endl;
        cout << "D = " << f / M_PI << endl;
        cout << "S = " << pow(f,2) / (4 * M_PI) << endl;
        break;
    case 4:
        cout << "S";
        cout << "Enter radius S = " << endl;
        cin >> m;
        cout << "R = " << sqrt( m / M_PI)  << endl;
        cout << "D = " << 2 * sqrt(m / M_PI) << endl;
        cout << "L = " << 2 * sqrt(m * M_PI) << endl;
        break;
    default:
        cout << "Error";
    }

    return 0;
}
