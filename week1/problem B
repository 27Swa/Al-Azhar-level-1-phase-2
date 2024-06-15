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
    long long n;
    cin >> n;
    bool* num = new bool [n+5] {};
    int count = 0, max_count = 0;
    for (long long i = 1; i <= 2 * n; i++)
    {
        int x;
        cin >> x;
        if (!num[x])
        {
            count++;
            num[x] = 1;
        }
        else
        {
            max_count = max(max_count, count);
            count--;
        }
    
    }
    cout << max_count;
    return 0;
}
