#include <iostream>
using namespace std;
int main()
{
	long long x;
	cin >> x;

	long long sum = 1 + x;
	if (x == 1)
		sum--;
	for (long long i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			sum += i;
			if ((x / i) != i)
				sum += (x / i);
		}
	}

	cout << sum;
	return 0;
}
