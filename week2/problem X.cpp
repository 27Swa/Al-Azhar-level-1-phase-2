#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;
vector<bool>primes;
bool comp = 0;
void sieve(int n)
{
    primes.resize(n + 2, 0);
    
    for (int i = 2; i * i <=(n + 1); i++)
    {
        if (primes[i] == 0)
        {
            for (int j = i * i; j <= n+1; j+=i)
            {
                comp = 1;
                primes[j] = 1;
            }
        }
    }
}
 
int main() {
    int n;
    cin >> n;
    sieve(n);
    if (n == 1 || comp == 0)
        cout << "1\n";
    else
        cout << "2\n";
    for (int i = 2; i <= n + 1; i++)
    {
        if (primes[i] == 0)
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }

    return 0;
}
