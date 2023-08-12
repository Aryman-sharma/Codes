#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int winner(int x, int y)
{int p = 0;
while (1)
{
    if (p == 0)
    {
        if (x >=1 && y >=1)
        {
            x--;
            y--;
            p = 1;
        }

        else if (x >= 2)
        {
            x = x - 2;
            p = 1;
        }
        else
        {
            return 1;
        }
    }
    if(p==1)
    {
        if (x >=1 && y >=1)
        {
            x--;
            y--;
            p = 0;
        }

        else if (y >=2)
        {
            y = y - 2;
            p = 0;
        }
        else
        {
            return 2;
        }
    }
}
}
int main()

{
    int ans;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        ans = winner(x, y);
        if (ans == 2)
        {
            cout << "CHEF"<<endl;
        }
        else
        {
            cout << "CHEFINA"<<endl;
        }
    }
    return 0;
}