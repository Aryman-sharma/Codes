#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[1000];
        int c = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1] || a[i + 1] - a[i])
            {
                c++;
            }
        }
        if (c == n - 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO";
    }
    return 0;
}