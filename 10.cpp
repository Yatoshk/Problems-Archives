#include <iostream> 
#include <cmath> 
using namespace std;
unsigned long long sum = 0;
int k = 2 * pow(10, 6);
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
    for (int j = 2; j < k; j++)
    {
        sum += SimpleNumber(j);
    }
    cout << sum << endl;
    return 0;
}




