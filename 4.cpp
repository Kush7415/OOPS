#include <bits/stdc++.h>
using namespace std;
void isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return;
    }
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        isprime(i);
    }
    return 0;
}