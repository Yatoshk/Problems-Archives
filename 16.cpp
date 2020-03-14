#include <iostream>
using namespace std;
unsigned long long counting = 0;

void LastTen(unsigned long long n)
{
	while (n != 0)
	{
		counting += n % 10;
		n /= 10;
	}
	cout << counting << endl;
}

int main()
{
	unsigned long long m = exp2(34);
	LastTen(m);
	return 0;
}

