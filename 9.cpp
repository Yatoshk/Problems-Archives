#include <iostream> 
#include <cmath> 
using namespace std;
int i = 1000;
int a, b, c;
int main(void)
{
   for (a = 1; a < i; a++)
   {
       for (b = 1; b < i; b++)
       {
           for (c = 1; c < i; c++)
           {
               if ((a < b < c) && (c == hypot(a, b)) && (a + b + c == 1000))
               {
                   cout << a*b*c << endl;
                   break;
               }
           }
       }
   }
   return 0;
}




