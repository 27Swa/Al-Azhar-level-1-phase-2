#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;
//0 -->prime
//else -->not prime
vector<bool> sieve;
vector<int> prime_num;
void calc_sieve(int x)
{
    sieve.resize((x + 1), 0);
    sieve[1] = 1;
    for (int i = 2; i * i <= x; i++)
    {

        if (sieve[i] == 0)
        {
            for (int j = i * i; j <= x; j += i)
            {
                sieve[j] = 1;
            }
        }
    }

    for (int j = 2; j <= x; j += 1)
    {
        if (sieve[j] == 0)
            prime_num.push_back(j);
    }
}
void count_almost_prime(int l)
{
    int counter = 0;
    for (int j = 6; j <= l; j += 1)
    {    vector<int>v1;
        if (sieve[j] != 0)
        {
            int k = j;
            int m = 0;
            while (k > 1)
            {
                bool flag = 0;
                while (k % prime_num[m] == 0)
                {
                    flag = 1;
                    k/= prime_num[m];
                    
                }
                if (flag)
                    v1.push_back(prime_num[m]);
                m++;
            }
            
            if (v1.size() == 2)
                counter++;
        }

    }
    cout<< counter;
}
int main() {
    int l;
    cin >> l;

    if (l <= 5)
        cout << 0;

    else
    {
        calc_sieve(l);
        count_almost_prime(l);
    }
    
    return 0;
}
