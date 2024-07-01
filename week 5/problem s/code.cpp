#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>	
#include<string>
#include<algorithm>
#include<cmath>
using  ll = long long;
using ld = long double;
using namespace std;
#define red_time ios_base::sync_with_stdio(0) ;cin.tie(0); cout.tie(0);
#define nl '\n'
ll n, k;
int sol() {
	cin >> n >> k;
	if (n <= k)
		return n;
	int s = 0, e = n, mid;
	int temp = 0;
	while (s <= e)
	{
		mid = (s + e) / 2;
		ll sum = 0;
		int x = mid;
		while (x > 0)
		{
			sum += x;
			x /= k;
		}
		if (sum == n)
			return mid;

		else if (sum < n)
			s = mid + 1;
		else 
		{
			temp = mid;
			e = mid - 1;
		}
	}
	return temp;
}
int main() {
	red_time;
	cout << sol();
	return 0;
}
