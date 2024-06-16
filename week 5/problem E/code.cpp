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
	* get #elements
	* get elements from the user
	* for each element iterate over elements while difference between them < = 5 
	* get the maximum difference
	*/
	init();
	int n, q;
	cin >> n;
	map<int, int>mp;
	for (int i = 0; i < n; i++)
	{	
		int x;
		cin >> x;
		mp[x] += 1;
	}
	if (mp.size() == 1)
		cout << n;
	else
	{
		map<int, int>::iterator it= mp.begin();
		map<int, int>::iterator it2 = it;
		it2++;
		int temp = -1;
		int maxi = -9;
		while (it != mp.end())
		{
			temp = it->second;
			while (it2 != mp.end())
			{
				int dif = abs(it->first - it2->first);
				if (dif <= 5)
				{
					temp += it2->second;
					it2++;
				}
				else
					break;
			}
			maxi = max(temp, maxi);
			it++;
			it2 = it;
			if (it2 != mp.end())
				it2++;
			else
				break;
		}
		cout << maxi;

	}
	
	return 0;
}
