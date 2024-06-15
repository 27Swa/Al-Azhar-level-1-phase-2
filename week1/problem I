#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    getline(cin, s);
    int* num = new int[s.size() + 5] {};
    for (int i = 0; i < s.size() - 1; i++)
    {
        num[i + 1] = num[i];
        if (s[i] == s[i + 1])
        {
            num[i + 1]++;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << num[r - 1] - num[l - 1] << "\n";
    }
    return 0;
}
