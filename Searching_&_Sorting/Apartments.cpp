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
    int n, m, k;
    cin >> n >> m >> k;
 
    int arr[n];
    int b[m];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
 
    sort(arr, arr + n);
    sort(b, b + m);
 
    int i = 0, j = 0;
    int cnt = 0;
 
    while (i < n && j < m)
    {
        if ((arr[i] + k) < b[j])
        {
            i++;
        }
        else if (arr[i] - k > b[j])
        {
            j++;
        }
        else
        {
            cnt++;
            i++;
            j++;
        }
    }
 
    cout << cnt << "\n";
}
