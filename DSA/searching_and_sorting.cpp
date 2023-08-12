#include <iostream>
#include <vector>

using namespace std;
#include <algorithm>

int binarysearch(int array[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = array[mid];

        if (element == target)
        {
            return mid;
        }

        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}
int findpeakindexmountain(vector<int> a) //////// wrong  see copy
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (((mid - 1) > 0 && a[mid - 1] < a[mid]) && (a[mid] > a[mid + 1] && (mid + 1) < (a.size() - 1)))
        {
            return mid;
        }
        else if (a[mid] > a[mid + 1])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}
int missingnum(vector<int> a)
{
    int start = 0;
    int end = a.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (a[mid] - mid == 1)
        {
            start = mid + 1;
        }
        else if (a[mid] - mid == 2)
        {
            end = mid - 1;
            ans = a[mid] - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int firstoccurence(int b[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int store = -1;

    while (start <= end)
    {
        int element = b[mid];

        if (element == target)
        {
            if (end == start)
            {
                return mid;
            }
            // store the input
            store = mid;
            end = mid - 1;
        }
        else if (element > target)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return store;
}
int squareroot(int n)
{
    vector<int> arr(n);
    int start = 0;
    int end = arr.size() - 1;
    int ans;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = i + 1;
    }

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if ((arr[mid]) * (arr[mid]) == n)
        {
            end = mid - 1;
        }

        if ((arr[mid]) * (arr[mid]) > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = arr[mid];
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
    }
}
int lastoccurence(int b[], int size, int target)

{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int store = -1;

    while (start <= end)
    {
        int element = b[mid];

        if (element == target)
        {
            if (end == start)
            {
                return mid;
            }
            // store the input
            store = mid;
            start = mid + 1;
        }
        else if (element > target)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return store;
}
int binarysearchnearlysorted(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s = (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if ((mid + 1) <= e && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if ((mid - 1) >= s && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}
int quotient(int(num), int divisor)
{
    int ans = 1;
    vector<int> a(abs(num));
    for (int i = 0; i <= a.size() - 1; i++)
    {
        a[i] = i + 1;
    }
    int s = 0;
    int e = a.size() - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (a[mid] * abs(divisor) == abs(num))
        {
            ans = a[mid];
            break;
        }
        else if (a[mid] * abs(divisor) > abs(num))
        {
            e = mid - 1;
        }
        else
        {
            ans = a[mid];
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    if ((divisor < 0 && num < 0) || (divisor > 0 && num > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int oddoccuringelement(vector<int> a)
{
    int ans = -1;
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (s == e)
        { /// if one elemet present
            return s;
        }

        if (mid % 2 == 0) /// if mid is even index
        {
            if (a[mid] == a[mid + 1])
            {
                s = mid + 2; //// right search
            }
            else
            {
                ans = mid;
                e = mid - 1; /////// left search
            }
        }
        else //// if mid is odd index
        {
            if (a[mid] == a[mid - 1])
            {
                s = mid + 1; /// right search
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    /*  int arr[] = {2, 4, 6, 8, 10, 12, 16};
     int size = 7;
     int target = 112;

     int indexoftarget = binarysearch(arr, size, target);
     if ( indexoftarget==-1)
     {
         cout<<"element not found";

     }
     else
     {cout <<" the index of the target element is"<< " "<<indexoftarget<<endl;}


 */
    /////    DIRECT FUNCTION TO FIND BINARY_SEARCH  INSIDE VECTOR   ////

    /*
      vector<int> brr{1, 2, 3, 4, 5, 6};
      int arr[] = {1, 2, 3, 4, 5, 6, 7};

      int size = 7;
      if (binary_search(brr.begin(), brr.end(), 59))
      {
          cout << "found";
      }
      else
      {
          cout << "not found" << endl;
      }

      if (binary_search(arr, arr + size, 5))
      {
          cout << "found in an array";
      }
      else
      {
          cout << " ni mila" << endl;
      }



  */

    //////////////////        qestion 1     first ocuurence of the element

    /*int b[] = {1, 3, 4, 4, 4, 4, 4, 6, 6, 7, 9};
       int size = sizeof(b) / sizeof(int);

       int target;
       cout<<"enter the target"<<endl;
       cin >> target;

       int index1 = firstoccurence(b, size, target);
       int index2 = lastoccurence(b, size, target);

       cout <<index1<< " "<<index2;



   */
    /// by linear search ////

    // vector<int>a{0,10,5,2};
    /*for(int i =0 ; i<=sequence.size();i++)
    {
       if((sequence[i]-i)==2)
       {
           cout<<" the missing number is "<< i+1 << " " ;
           break;
       }
    }
    */
    //// by binary search   ///

    /*  int num = missingnum(a);
      cout << " the missing num is"
           << " " << num;

  */
    /* int peak = findpeakindex(a);
    cout<<" the peak index is "<< peak << endl;

    */
    //////////   class 2   binary search   //////

    //////    q1 find pivot element  ////////////

    /*****************************************************************************************************square root*/

    /*int num;
    int precision;
    cout<<"enter the number whose square root you want and the number upto u want precison"<<endl;
    cin>>num;
    int answr=squareroot(num);
    cout<< " the partial ans is "<< answr<<endl;
   cout<<" enter the value of pecisison" << endl;
   cin>> precision;
   double finalans;

   double step =0.1;

   for(int i=0;i<precision;i++)
   {
       for(double j=answr; j*j<=num;j=j+step)
       {
         finalans=j;
       }
       step=step/10; 
   }
   cout<<finalans<<endl;*/

    ///////////*******************************************************************************///////////////////////////////////////***************************************

    /*          BINARY SEARCH IN A 2D ARRAYY                  */
    // see in the copy

    /////////////////////////////////////////////////////////// binary search important questions

    /* nearly sorted array
     */
/*
vector<int> a{1,1,2,2,3,3,4,4,5,5,6,6,7,7,1,1,2,2,3,100,100};
int finalans=oddoccuringelement(a);
cout<<"index is" <<" " <<finalans<<endl;
cout<<"value is" <<" "<< a[finalans]<<endl;
*/
cout<<(1-3);
} 