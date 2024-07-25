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
int n,m;
void sol() {
	cin >> n >> m;
	vector<ll>vec(n + 1);
	
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	int p1 = 0, p2 = 0;
	int temp = -1;
	ll sum = vec[p1];
	bool flag = 0;
	while (p2 < n)
	{
		if (sum < m)
		{
			p2++;
			sum += vec[p2];
		}
		else
		{
			if ((temp == -1) || (temp > (p2 - p1 + 1)))
				temp = p2 - p1 + 1;
			sum -= vec[p1];
			p1++;
		}
	}
	cout << temp;
}
int main() {
	red_time;
	sol();
	return 0;
}
