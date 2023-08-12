#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int c = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int i = 0;
        while (i < n)
        {

            int k;
            cin >> k;

            if (i == 0)
            {
                a[i] = k;
                i++;
                continue;
            }
            a[i] = k;

            if (k >= a[i - 1])
            {

                c++;
                i++;
                continue;
            }
            else
            {
                i = 0;
                count++;
                continue;
            }
            i++;
        }
        if (c == n -
    }
}
