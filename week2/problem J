#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;

void count_almost_prime(long long l,long long j)
{
    long long u = l;
    vector<long long>v1;
    long long m = 0;
    v1.push_back(1);
    v1.push_back(l);
    for (long long i = 2; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            v1.push_back(i);
            if (l / i != i)
                v1.push_back(l / i);
        }
    }
    
    if (v1.size() >= j)
    {
        sort(v1.begin(), v1.end());
        cout << v1[j - 1];
    }
    else
        cout << -1;
}
 
int main() {
    long long n,k;
    cin >> n >> k;

    if (k == 1) {
        cout << 1;
    }
    
    else {
        if (n > 1)
        {
            count_almost_prime(n, k);
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}
