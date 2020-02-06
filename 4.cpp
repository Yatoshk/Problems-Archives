#include <iostream>
#include <cmath>
using namespace std;
int x;
int y = 0;

int Inversion(int n)
{
	int l = 0;
	while (n != 0)
	{
		l = l * 10 + (n % 10);
		n /= 10;
	}
	return l;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			x = i * j;
			if ((y < x) && (Inversion(x) == x))
			{
				y = x;
				cout << y << endl;
			}
		}
	}
}