#include<iostream>	
#include<string>
#include<set>
#include<queue>
#include<vector>
#include<unordered_map>
#include<map>
#define nl "\n"
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	int s,q;
	cin >> s >> q;
	map<string, ll>mp;
	for (int i = 0; i < s; i++)
	{
		string s;
		int x;
		cin >> s>>x;
		mp[s] = x;
	}
	for (int i = 0; i < q; i++)
	{
		int x;
		string s;
		cin >> x >> s;
		if (x == 1)
		{
			int y;
			cin >> y;
			mp[s] += y;
		}
		else
		{
			cout << mp[s] << nl;
		}
	}

	return 0;
}
