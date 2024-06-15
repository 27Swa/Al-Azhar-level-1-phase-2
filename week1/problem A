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
    int n;
    cin >> n;
    int* num = new int[n + 9] {};
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }
    if (n <= 3)
        cout << 1;
    else
    {
        sort(num + 1, num + n + 1);
        int x = num[n] + num[n - 1]+1;
        int* arr = new int[x] {};
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                arr[num[i] + num[j]]++;
            }
        }
        sort(arr + 1,arr+x);
        cout << arr[x - 1];
    }
    return 0;
}
