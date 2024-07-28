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
	vector<ll>v(n);
	ll mini = LLONG_MAX;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		ll s = abs(2 * v[i]);
		mini = min(s, mini);
		if (v[i] < 0)
			cnt++;
	}
	if(cnt > 0 && cnt != n && mini != 0)
	{
		sort(v.begin(), v.end());
		int p0 = 0, p1 = n - 1;
		while (p0 < p1)
		{
			ll s = abs(v[p0] + v[p1]);
			mini = min(s, mini);
			if (mini == 0)
				break;
			else if (abs(v[p0]) > v[p1])
				p0++;
			else
				p1--;

		}
	}
	cout << mini;
}
int main() 
{
	red_time;
	sol();
	return 0;
}
