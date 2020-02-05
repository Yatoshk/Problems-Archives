#include <iostream>
using namespace std;
int serchNumber = 10000000000;
int counting, x = 20;
int main()
{
	for (int n = 1; n <= 10000000000; n++)
	{
		for (int i = 1; i <= x; i++)
		{
			if (n % i == 0)
				counting++;
		}
		if (counting == x)
		{
		cout << n << endl;
			if (n < serchNumber)
				serchNumber = n;
		}
		counting = 0;
	}
	cout << "Smallest numb: " << serchNumber << endl;
}