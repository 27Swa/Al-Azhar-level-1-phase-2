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
	int s,q;
	cin >> s;
	deque<int>dq;
	for (int i = 0; i < s; i++)
	{
		int x;
		cin >> x;
		dq.push_back(x);
	}
	cin >> q;
	set<int>st;
	for (int i = 0; i < q; i++)
	{
		char ch;
		
		cin >> ch;
		switch (ch)
		{
		case 'L':
			if (dq.empty())
				continue;
			st.insert(dq.front());
			dq.pop_front();
			break;
		case 'R':
			if (dq.empty())
				continue;
			st.insert(dq.back());
			dq.pop_back();
			break;
		case 'Q':
			if (!st.empty())
			{
				cout << *(st.rbegin()) << nl;
				st.erase(*(st.rbegin()));
			}
			else
				cout << -1 << nl;
			break;
		default:
			break;
		}
	}
	return 0;
}
