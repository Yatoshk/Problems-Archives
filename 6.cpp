#include <iostream>
using namespace std;
int SumOfSquares, SquaresOfSum;
int box = 0;
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		SumOfSquares += i * i;
	}
	for (int i = 1; i <= 100; i++)
	{
		box += i;
	}
	SquaresOfSum += box * box;
	cout << SquaresOfSum - SumOfSquares;
}