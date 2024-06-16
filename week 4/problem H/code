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
int main()
{
	short int n, m;
	cin >> n >> m;
	map<string, string>mp;
	string s1, s2;
	for (int i = 0; i < m; i++)
	{
		cin >> s1 >> s2;
		if (s1.size() <= s2.size())
			mp[s1] = s1;
		else
			mp[s1] = s2;
	}
	string out ="";
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		if (i == 0)
			out = mp[x];
		else
			out = out +" "+ mp[x];
	}
	cout << out;
	return 0;
}
