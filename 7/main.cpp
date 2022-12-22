#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;
int factorial(double n)
{
    if
 {
      return 0;
 }
    return !n ? 1 : (2 * n - 1 )* factorial(n - 1);
}
int opr(int i, float x)
{
  return pow(-1,i-1) * (pow(x,((4 * i) - 2)) / factorial(i));
}
int main()
{
    int infinity ;
     for (int i = 1; i >= infinity ; i++)

    int x;
    float res = 0;
    cout << "Write x = " << endl;
    cin >> x ;

    int e;
    cout << "Write e = " << endl;
    cin >> e ;
    while (i > infinity) {
      if (abs( opr(i,x) - opr(i - 1,x)) < e)
      {
          break;
      }
    else
      {
        res += opr(i,x);
        cout << res << endl;
        i++;
      }
    }
    cout << res << endl;

}
