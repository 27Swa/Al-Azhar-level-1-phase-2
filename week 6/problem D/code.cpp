#include<iostream>
#include<vector>
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
int n;
void sol() {
	cin >> n;
	vector<ll>v(n + 5);
	int cnt = 0;
	int ns = 1;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		ll k;
		cin >> k;
		if (i != 0)
		{
			if (v[j - 1] != k)
			{
				v[j] = k;
				j++;
				ns++;
			}
		}
		else
		{
			v[j] = k;
			j++;
		}
	}
	bool neg = (v[ns] < 0);
	bool pos = (v[0] >= 0);
	if (neg||pos)
	{
		cnt = ns;
		cout << ns;
	}
	else 
	{
		int p0 = 0, p1 = ns - 1;
		while (p0 < p1)
		{
			if (abs(v[p0]) < v[p1])
			{
				p1--;
			}
			else if (abs(v[p0]) == v[p1])
			{
				p0++;
				p1--;
				cnt++;
			}
			else
				p0++;
		}
		cout << ns - cnt;
	}
}
int main() 
{
	red_time;
	sol();
	return 0;
}
