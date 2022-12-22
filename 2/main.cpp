#include <iostream>
#include<windows.h>
#include<math.h>

using namespace std;

int main()
{
    double x, y, z, res;
    const double e = 2.71828182846;
    const float pi = 3.14159265;
    cout << "Enter x = " << endl;
    cin >> x;
    cout << "Enter y= " << endl;
    cin >> y;
    cout << "Enter z= " << endl;
    cin >> z;
    res = ( 2 * cos(x - ( pi /6)) * (1 + (( pow(z,2)) / ( pi - ( pow(z,2))/5)))) / ( e + ( sin(y) * sin(y)));
    cout << res;
    return 0;
}
