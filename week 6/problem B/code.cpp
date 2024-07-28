#include<iostream>
#include<vector>
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
int n,m;
void sol() {
	cin >> n >> m;
	vector<char>vec(n + 1);
	
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	
	int p1 = 0, p2 = m - 1;
	vector<int>freq(26); // as the number of english letters is 26
	int total = 0;
	int l;
	while (p1 <= p2)
	{
		l = vec[p1] - 'a';
		if (freq[l] == 0)
			total++;
		freq[l]++;
		p1++;
	}
	p1 = 0;
	int temp = total;
	p2++;
	while (p2 < n)
	{
		l = vec[p1] - 'a';
		if (freq[l] >= 1)
		{
			if(freq[l]==1)
				temp--;
			freq[l]--;
		}


		l = vec[p2] - 'a';
		if (freq[l] == 0)
			temp++;
		freq[l]++;
		if (temp > total)
			total = temp;
		p1++;
		p2++;

	}
	cout << total;
}
int main() {
	red_time;
	sol();
	return 0;
}
