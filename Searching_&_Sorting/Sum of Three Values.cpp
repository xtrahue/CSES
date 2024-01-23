//My approach....Gives TLE O(n^2)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp.insert({arr[i], i+1});
    }
    int a1 = 0, a2 = 0, a3 = 0;
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int k=target-arr[i] ;
                k-=arr[j] ;

                int target_inx = mp[k];

                if (target_inx!=0 && target_inx-1 != i && target_inx-1 != j)
                {
                    flag = 1;
                    a1 = i + 1;
                    a2 = j + 1;
                    a3 = target_inx ;
                    // cout << a1 << " " << a2 << " " << a3 << endl;
                    break;
                }
            }
        }
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}



//USACO approach...obviously the better one...O(nlogn)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i] = {k, i};
    }

    sort(arr.begin(), arr.end());

    int a1 = 0, a2 = 0, a3 = 0;
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        int l = 0, r = n - 1;
        int x = target - arr[i].first;
        while (l != r)
        {
            int tot = arr[l].first + arr[r].first;
            if (l != i && r != i)
            {
                if (tot == x)
                {
                    flag = 1;
                    a1 = arr[i].second + 1;
                    a2 = arr[l].second + 1;
                    a3 = arr[r].second + 1;
                    break;
                }
            }
            if (tot < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}
