#include <iostream>
using namespace std;
int j;
int result = 0;
int Fib(int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	n = Fib(n - 1) + Fib(n - 2);
	return n;
}

int main()
{
	while (Fib(j) < 4000000)
	{
		j++;
	}
	for (int k = 0; k < j; k++)
	{
		if (Fib(k) % 2 == 0)
		{
			result += Fib(k);
		}
	}
	cout << result;
}
