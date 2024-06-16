#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;

int main() {
    int counter = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        counter += x;
    }
    if (counter % 5 == 0 && counter > 0)
    {
        cout << counter / 5;
    }
    else
        cout << -1;
    return 0;
}
