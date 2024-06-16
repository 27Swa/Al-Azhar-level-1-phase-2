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
	/*steps:
		store names in array
		iterate over names reversely
		check if name is not exist in unordered map then
			add the name at the end of the 2nd arr
		print names
	*/
	unordered_map<string, short>ump;
	int n;
	cin >> n;
	vector<string>vec(n);
	vector<string>out;
	for (int i = n - 1; i > -1; i--)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (ump.count(vec[i]) == 0)
		{
			out.push_back(vec[i]);
			ump[vec[i]] = 1;
		}
	}
	for (int i = 0; i < out.size(); i++)
		cout << out[i] << nl;
	return 0;
}
