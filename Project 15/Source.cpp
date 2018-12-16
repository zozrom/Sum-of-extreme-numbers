#include <iostream>
using namespace std;

int main()
{
	int n;
	int s;
	int a; int d;

	cout << "Enter the numbers :" << endl;
	cin >> n;
	n = abs(n);
	s = n % 10;

	do
	{
		if (n % 10 == n)
		{
			cout << n + n << endl;
			break;
		}

		a = n % 10;
		n = n / 10;
		if (n / 10 == 0)
		{
			d = n;

		}
	} while (n / 10 > 0);

	cout << d + s;
}