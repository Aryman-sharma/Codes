#include <iostream>
#include <vector>

using namespace std;
#include <algorithm>
// method 1  // q1
/* void sortcolors(vector<int> &nums)
{
   int ca = 0;
   int cb = 0;
   int cc = 0;
   for (int i = 0; i < nums.size(); i++)
   {
       if (nums[i] == 0)
       {
           ca++;
       }
       else if (nums[i] == 1)
       {
           cb++;
       }

       else
       {
           cc++;
       }
   }

   for (int i = 0; i < ca; i++)
   {
       nums[i] = 0;
   }
   for (int i = ca; i < cb + cb; i++)
   {
       nums[i] = 1;
   }
   for (int i = cb + cb; i < cc + cb + cb; i++)
   {
       nums[i] = 2;
   }
}
*/
// mETHOD 2 // /three pointer approch
/*void sortcolors(vector<int> &nums)
{
    int l=0;
    int m = 0;
    int h = nums.size() - 1;
    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
}
*/

///////////////////////////////////////////////////////////

// q2 // ************ DUTCH NATIONAL FLAG
/*void negativesonleft(vector<int> a)
{
    int s = 0, e = a.size() - 1;
    while (s <= e)
    {
        if (a[s] < 0 && a[e] < 0)
        {
            s++;
        }
        else if (a[s] > 0 && a[e] < 0)
        {
            swap(a[s], a[e]);
            s++;
            e--;
        }
        else if (a[s] > 0 && a[e] > 0)
        {

            e--;
        }
        else
        {

            s++;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}
*/

/////////////////////////////////////////////////////////////

// q3 //
int duplicate(vector<int>brr)
{
   
}

int main()
{

    // vector<int> nums = {2, 0, 2, 1, 1, 0};
    // sortcolors(nums);
    //  q1//

    ///////////////////////

   // vector<int> a = {1,2,3,4,5,6,8,4,5,12,5,54,5,54,5,4,54,-1};
   // negativesonleft(a);

   ////////////////////////


}