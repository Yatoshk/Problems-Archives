#include <iostream>
using namespace std;
int const n = 10;
int result = 0;
int main()
{
	int array[n];
	for (int i = 1; i < n; i++)
	{
		array[i - 1] = i;
		if (array[i - 1] % 3 == 0 || array[i - 1] % 5 == 0)
		{
			result += array[i - 1];
		}
	}
	cout << result;
	cout << endl;
	system("pause");
	return 0;
}

