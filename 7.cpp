#include <iostream>
using namespace std;
int const x = 10001;
int numb[x];
int Simple(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum++;
	}
	if (sum > 1)
		return 0;
	else
		return n;
}

int main()
{
	int a = 0;
	for (int i = 1; i <= 200000; i++)
	{
		if ((Simple(i) == i) && (i != 1))
		{
			if (a <= 10000)
			{
				numb[a] = i;
				a++;
			}
			else
				break;
		}
	}
	cout << numb[10000];
	return 0;
}