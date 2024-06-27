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


int sol() {
	int n, l;
	cin >> n >> l;

	vector<int> arr(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	vector<int> presum(n + 1);
	presum[0] = 0;
	for (int i = 1; i <= n; i++)
		presum[i] = presum[i - 1] + arr[i];
	int temp = 0;
	int maxi = 0;
	for (int i = 1; i <= n; i++)
	{
		int start = i, end = n,mid; 
		int k = start - 1;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if ((presum[mid] - presum[k]) <= l)
			{
				maxi = max(maxi, (mid - k));
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
	}
	return maxi;
}

int main() {

	red_time;
	cout << sol();
	return 0;
}
