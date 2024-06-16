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
	* sort the array
	* get #queries
	* get the queries
	* for each query apply upperbound function for the given element 
	* check if the size is less than the begin of the vector if not print 0
	* if the size is greater than the size of the array print array size
	*/
	init();
	int n, q;
	cin >> n;
	vector<int>vec(n);
	for (int i = 0; i < n; i++)
	{	
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x;
		cin >> x;
		int res = upper_bound(vec.begin(), vec.end(), x) - vec.begin();
		//0   1		2	 3	  4 
		//3   6 	8	 10	  11
		//1  --> 0
		//3 --> 1
		//6 -->2
		//8 -->3
		//10 -->4
		//11 -->5
		//16 -->5
		cout << res << nl;
	}
	
	return 0;
}
