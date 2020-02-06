#include <iostream>
#include <cmath>
using namespace std;
long double counting = 0;
int arr[3];
int y = 10;
int x = 10;

int Ten(int n)
{
	for (int i = 0; i < y; i++)
	{
		arr[i] = n % 10;
		cout << arr[i] << " ";
		n /= 10;
	}
	return 0;
}

int main()
{
	for (int i = 1; i <= x; i++)
	{
		cout << pow(i, i) << endl;
		counting += pow(i, i);
	}
	cout << counting << endl;
	cout << Ten(counting) << endl;

	system("pause");
	return 0;
}