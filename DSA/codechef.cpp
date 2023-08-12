#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

/*int winner(int x, int y)
{
    int p = 0;
    while (1)
    {
        if (p == 0)
        {
            if (x >= 1 && y >= 1)
            {
                if (x >= 2)
                {
                    x = x - 2;
                    p = 1;
                }

                else
                {
                    x--;
                    y--;
                    p = 1;
                }
            }

            else
            {
                return 2;
            }
        }
        if (p == 1)
        {
            if (x >= 1 && y >= 1)
            {
                if (y >= 2)
                {
                    y = y - 2;
                    p = 0;
                }

                else
                {
                    x--;
                    y--;
                    p = 0;
                }
            }
            else

            {
                return 1;
            }
        }
    }
}
*/
int main()

{ 
 
   /*int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=0; i<1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
   }
   cout<<count<<endl;
   

}
*/
int t;
cin>>t;
int count=0;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    int brr[n];
     for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
    for(int i=0;i<n;i++)
   {
    cin>>brr[i];
   }
   int i=0;
   while(i<n)
   {
     
     if(abs(arr[i]-brr[i])<=max(arr[i],brr[i])/2)
     {
         count++;
         i++;
     }
     else
     {
         i++;
     }
   }
   cout<<count<<" ";
   }
 
}
  


 


