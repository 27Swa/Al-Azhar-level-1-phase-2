#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	vector < vector<int> >v2(k,vector<int>());

	for (int i = 0; i < n; i++)
	{
		int z;
		cin >> z;
		v2[(z % k)].push_back(z);
	}
	
	count += v2[0].size();

	if (v2[0].size() % 2 == 1)
		count -= 1;

	for (int i = 1; i < ((k / 2) + 1); i++)
	{
		if (i == k / 2 && k % 2 == 0 )
		{
			count += v2[i].size();
			if (v2[i].size() % 2 == 1)
				count -= 1;
		}
		else
		{
			int y = k - i;
			int x = min(v2[i].size(), v2[y].size());
			count += (x * 2);
		}
		
	}
	
	

	cout << count;

	return 0;
}
