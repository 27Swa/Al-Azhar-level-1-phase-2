#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v1(n + 5);
	vector<int> v2(n + 5);
	set<int>s1;
	vector<int>v3;
	for (int i = 1; i <= n; i++)
	{
		cin >> v1[i];
	}
	v2[n] = 1;
	v3.push_back(v1[n]);
	for (int i = n - 1; i >= 1; i--)
	{
		int size = v3.size();
		
		vector<int>::iterator it = std::lower_bound(v3.begin(), v3.end(), v1[i]);
		
		if (!(it != v3.end() && *it == v1[i]))
		{
			v3.insert(it, v1[i]);
		}
		
		v2[i] = v2[i + 1];
		
		if (size != v3.size())
			v2[i] += 1;
	}

	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		cout << v2[x]<<"\n";
	}

	return 0;
}
