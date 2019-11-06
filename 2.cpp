#include <iostream>
using namespace std;
int const i = 3999999;
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
	for (int k = 0; k < i; k++)
	{
		if (Fib(k) % 2 == 0)
		{
			result += Fib(k);
		}
	}
	cout << result;
}