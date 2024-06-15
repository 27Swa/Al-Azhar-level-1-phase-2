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
    int arr[28]{};
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        arr[x - 'a']++;
    }
    sort(arr, arr + 26);
    if (arr[25] >= 2 || n == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
