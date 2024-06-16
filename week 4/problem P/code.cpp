#include<iostream>	
#include<string>
#include<set>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
	int n;
	cin >> n;
	deque<char>dq;
	unordered_map<string, int> vec;
	string s;
	string q;
	int m = 0;
	cin >> s;
	dq.push_back(s[0]);
	for (int i = 1; i < n; i++)
	{
		dq.push_back(s[i]);
		string tmp(dq.begin(),dq.end());
		vec[tmp]++;
		if (vec[tmp] > m)
		{
			m = vec[tmp];
			q = tmp;
		}
		
		dq.pop_front();
	}

	cout << q;
	return 0;
}
