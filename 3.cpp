#include <iostream> 
#include <cmath> 
using namespace std;
unsigned long long x = 600851475143;
int max = 0;
int i = 2;
int SimpleNumber(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n;
}
int main(void)
{
    while (x != 1)
    {
        if ((SimpleNumber(i) != 0) && (x % i == 0))
        {
            x /= i;
            max = i;
        }
        i++;
    }

    cout << max << endl;
    return 0;
}




