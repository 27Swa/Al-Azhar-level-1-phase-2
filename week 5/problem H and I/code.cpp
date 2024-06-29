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
	vector<vector<int>>vec(n, vector<int>(2));
	map<int, vector<int>>mp;
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			vec[j][i] = x;
		}
	}
	for (int i = 0; i < n; i++){
		int div = vec[i][1] / vec[i][0];
		vec[i][1] = vec[i][1] % vec[i][0];
		mp[div].push_back(i);
	}
	map<int, vector<int>>::iterator it = mp.begin();
	int res = it->first;
	int add = 0;
	vector<ll>sum(2, 0);
	while (it != mp.end()) {
		for (int i = 0; i < it->second.size(); i++)
		{
			int x = it->second[i];
			sum[0] += vec[x][1];
			vec[x][1] = 0;
			sum[1] += vec[x][0];
		}
		if (sum[0] != 0 && k >= (sum[1] - sum[0]))
		{
			res++;
			k -= (sum[1] - sum[0]);
			sum[0] = 0;
		}
		add = k / sum[1];
		it++;
		//	add 10 res 99  it->first 100	add = it->first -res;
		if (it != mp.end()&& ((res + add) >= it->first))
		{
			
				add = it->first - res;
				res = it->first;
				k = k - (sum[1] * add);
		}
		// add 0  res 99 it->first 100  ->can make more cookies ->res+add 
		else
		{
			res += add;
			break;
		}
		add = 0;
	}
	return res;
}
int main() {
	red_time;
	cout << sol();
	return 0;
}
