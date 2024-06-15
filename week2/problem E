#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;
//0 -->prime
//1 -->not prime
vector<int> prime_num;
vector<bool> sieve;
void calc_sieve(int x)
{
    sieve.resize((x + 1), 0);
    sieve[1] = 1;
    if (x == 2) 
        prime_num.push_back(2);
    for (int i = 2; i * i <= x; i++)
    {

        if (sieve[i] == 0)
        {
            prime_num.push_back(i);

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

int main() {
    int l;
    cin >> l;
    calc_sieve(l);
    vector < pair<int, int>>prime_count;
    int i = 0;
    while (l > 1)
    {
        int counter = 0;
        while (l % prime_num[i] == 0)
        {
            counter++;
            l /= prime_num[i];
        }
        if (counter != 0)
            prime_count.push_back(make_pair(prime_num[i], counter));
        i++;
    }

    vector<pair<int, int>>::iterator it = prime_count.begin();

    while (it != prime_count.end())
    {
        cout << it->first << " " << it->second;
        it++;
        if (it != prime_count.end())
            cout << "\n";

    }
    return 0;
}
