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
    cin >> n >> x;
 
    int arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
 
    int i = 0, j = n - 1;
    int cnt = 0;
 
    while (i <= j)
    {
        if (i == j)
        {
            cnt++;
            i++;
            break;
        }
        else if ((arr[i] + arr[j]) <= x)
        {
            i++;
            j--;
            cnt++;
        }
        else
        {
            j--;
            cnt++;
        }
    }
 
    cout << cnt << "\n";
}
