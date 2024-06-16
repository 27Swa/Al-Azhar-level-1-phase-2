#include    <iostream>
#include    <algorithm>
#include    <numeric>
#include    <vector>
using namespace std;

void fun(int n, int m, int a, int b)
{
    int divide = n / m;
    int remind = (n % m)*a;
    int special = (divide * b) ;
    
    if (remind < b)
        special += remind;
    else
        special += b;

    int ticket = n * a;
    if (special > ticket)
        cout << ticket;

    else
        cout << special;
}
 
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    fun(n, m, a, b);

    return 0;
}
