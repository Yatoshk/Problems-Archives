#include <iostream> 
#include <ctime> 
using namespace std;
int min, max, n;
int i = 0;
int main(void)
{
    cout << "Enter the number of digits in the number: ";
    cin >> n;
    int *x = new int[n];
    cout << "Enter the max, min: ";
    cin >> max;
    cin >> min;
    srand(time(NULL));
    int a = min + rand() % (max - min);
    cout << "Random number: " << a << endl;
    while (i < n)
    {
        x[i] = a % 10;
        a /= 10;
        i++;
    }
    for (int j = n; j > 0; j--)
    {
        cout << x[j -1];
        if (j > 1)
        { cout << ", "; }
    }
    return 0;
}




