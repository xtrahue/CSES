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
    int n, x;
    cin >> n;
 
    set<int> st;//don't know why taking a unordered_set is giving tle at the last test case
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
}
