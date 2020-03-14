#include <iostream> 
using namespace std;
long long Mvalue = 0;
long Mlength = 0;
long l(long long n)
{
	long i = 1;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}
		i++;
	}
	return i;
}
int main(void)
{
	for (long long i = 2; i < 1000000; i++)
	{
		long length = l(i);
		if (length > Mlength) {
			Mlength = length;
			Mvalue = i;
		}
	}
	cout << "Biggest chain: " << Mvalue << ": "<< Mlength<< endl;
	return 0;
}

