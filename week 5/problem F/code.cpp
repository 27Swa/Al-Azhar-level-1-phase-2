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

ll n, l;
ll res = 0;
ll sol() {
	/*
	* Get the factor that want to get 9*i+j
	* while number > s calculate the n numbers to be added 
	* return the result
	*/
	if (l % 9 != 0)
		l += (9 - (l % 9));
	if (n < 10 ||(l > n))
		return 0;

	ll s = 9;
	ll e = n;
	ll mid;
	while (s <= e)
	{
		mid = (s + e) / 2;
		ll digit_sum = 0;
		ll x = mid;
		while (x != 0)
		{
			digit_sum += x % 10;
			x /= 10;
		}
		if (mid - digit_sum < l)
			s = mid + 1;
		else
			e = mid - 1;
	}
	return n - e;
}

int main() {

	red_time;
	cin >> n >> l;
	cout<<sol();
	return 0;
}
