#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	//prefix sum array
	vector<int> pref(n + 5);
	//theorems number array at each minute
	int* arr1 = new int[n + 5];
	//awake minutes
	vector <int> v(n + 5);
	int count = 0;
	int maxi = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 1; i <= n; i++)
	{	
		int x;
		cin >>x;
		if (x == 0)
		{
			v[i] = arr1[i];
		}
		else
		{
			v.push_back(0);
			count += arr1[i];
		}
		pref[i] = pref[i - 1] + v[i];
	}

	for (int i = 1; i <= n - k + 1; i++) 
	{
		int x = i - 1;
		int y = i + k - 1;
		if (i == 1)
		{
			maxi = pref[y] - pref[x];
		}
		else
		{
			maxi = max(maxi, (pref[y] - pref[x]));
		}
	}
	count += maxi;
	cout << count;
	return 0;
}
