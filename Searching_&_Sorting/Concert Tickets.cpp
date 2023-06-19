#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod

int main()
{
    int n, m;
    cin >> n >> m;

    int b[m];
    multiset<int> ms;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        ms.insert(k);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        auto it = ms.upper_bound(b[i]); 
        if (it == ms.begin()) //all the numbers present in ms is greater than b[i]
        {
            cout << "-1\n";
        }
        else
        {
            cout << *(--it) << "\n";
            ms.erase(it);
        }
    }
}
