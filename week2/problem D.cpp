#include    <iostream>
#include    <algorithm>
#include    <numeric>

using namespace std;

int main() {
    int l, r, mod;
    long long res = 1;
    cin >> l >> r >> mod;
    for (int i = l; i <= r; i++)
        res = (res * (i % mod)) % mod;
    cout << res;
    return 0;
}
