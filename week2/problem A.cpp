#include <iostream>
using namespace std;
bool is_prime(long long x)
{
	if (x == 1) {
		return 0;
	}
	
	if (x == 2)
	{
		return 1;
	}
	
	if (x % 2 == 0)
	{
		return 0;
	}
	
	for (long long i = 3; i * i <= x; i += 2)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
int main()
{
	long long x;
	cin >> x;

	if (is_prime(x))
		cout << "YES";

	else 
		cout << "NO";

	return 0;
}
