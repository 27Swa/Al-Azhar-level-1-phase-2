#include<iostream>	
#include<string>
#include<set>
#include<queue>
#include<vector>
#include<unordered_map>
#include<map>
#include<set>
#define nl "\n"
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	int n, m;
	cin >> n >> m;
	unordered_map<string, string>ump;
	for (int i = 0; i < n; i++)
	{
		string ip,name;
		cin >> name >> ip;
		ump[ip]=name;
	}
	for (int i = 0; i < m; i++)
	{
		string command, ip;
		cin >> command >> ip;
		string s(ip.begin(), ip.end() - 1);
		cout << command << " " << ip << " #" << ump[s] << nl;
	}
	return 0;
}
