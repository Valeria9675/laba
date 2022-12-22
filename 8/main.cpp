#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int size = 5;
      int i, arr[size], res;
      cout << " Enter " << size << " any numbers: " << endl;
      for (int i = 0; i < size; i++ )
         cin >> arr[i];
    int i_min = arr[0];
    int i_max = arr[0];

      for (int i = 1; i < size; i++ )
    {
        if ( i_min > arr[i])
          {
             i_min = i;
          }
    }
      cout << " Minimum number in an array: " << i_min << endl;
       for ( int i = 1; i < size; i++)
    {
        if ( i_max < arr[i])
        {
            i_max = i;
        }
    }
       cout << " Maximum number in an array: " << i_max << endl;

        int p = 1;

          if ( i_min < i_max)
          {
            for ( int i = i_min + 1; i < i_max; i++ )
               {
                   p *= arr[i];
               }
          }
           if ( i_min > i_max )
           {
              for ( int i = i_max + 1; i < i_min; i++ )
                {
                   p *= arr[i];
                }
           }

        cout << " Product between max and min : " << p << endl;


    return 0;
}
