#include<iostream>	
#include<string>
#include<set>
#include<queue>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<cmath>
#include<set>
#define nl "\n"
using namespace std;
using ll = long long;
using ld = long double;
void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}
int main()
{
	/*steps:
		get elements from the user
		make a loop for getting the queries
		for each query apply the right function
	*/
	init();
	int n, q;
	cin >> n >> q;
	vector<int>vec(n);
	for (int i = 0; i < n; i++)
	{	
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < q; i++)
	{
		string s; int x;
		cin >> s >> x;
		if(s =="binary_search")
		{
			
			if (binary_search(vec.begin(), vec.end(),x))
				cout << "found" << nl;
			else
				cout << "not found" << nl;
		}
		else if (s == "lower_bound")
		{
			int res = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
			if (res != vec.size())
				cout << vec[res] << nl;
			else
				cout << -1 << nl;
		}
		else
		{
			int res = upper_bound(vec.begin(), vec.end(), x) - vec.begin();
			if (res != vec.size())
				cout << vec[res] << nl;
			else
				cout << -1 << nl;
		}

	}
	
	return 0;
}
