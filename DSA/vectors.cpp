#include <iostream>
#include <vector>
using namespace std;
int main()
{

    /* vector<int> arr;
        cout << arr.size() << endl;
        cout << arr.capacity() << endl;
        int ans = sizeof(arr) / sizeof(int);
        cout << ans << endl;
        arr.push_back(6);
        arr.push_back(5);
        arr.push_back(4);
        arr.pop_back();
**********************************************************
         // printing vector //

        for(int i=0;i<arr.size(); i++)
        {
            cout<< arr[i] << " ";

        }
*   **********************************************************
       /* vector<int> brr(3,4);
        cout<<brr.size()<<endl;
         for (int j =0; j < brr.size();j++)
         {
            cout<<brr[j]<<" ";
         } */
    ////////////////////////////////////////////////////////////////////
    /*int n;
    cout<<"enter the size of vector"<<endl;
   cin>>n;
vector<int> a(n);
    for(int i=0 ; i< a.size();i++)
     {
       int element;
       cout<<"enter the "<< i << "th element "<<endl;
       cin>>element;
       a[i]=element;

     }

    for (int i = 0; i < a.size(); i++)
     {

         cout << a[i] << " ";
     }
     cout<<endl;*/
    /// cout<< " is vector empty or,, not " <<endl<< a.empty()<<endl;


    /* cout << " enter the size of the vector " << endl;
     int input;
     cin >> input;
     vector<int>cat(input,4);

     for (int i = 0; i < cat.size(); i++)
     {

         cout << cat[i] << " ";
     }

     cout << "the capacity of the vector is now "
          << " " << cat.capacity() << endl;
          **/
   
   // question 1===================// uniquee element /// 
   
   
   
 /*   vector<int> s{1, 2, 4, 2, 1, -2, 6, 5, 5, 6, 4};

    int val = 0;
    for (int i = 0; i < s.size(); i++)
    {
        val = s[i] ^ val;
    }

    cout << val<< endl;
        return 0;
*/

// question 2 ======================// finding union of two elemtns



/*vector<int>a{ 1,2,3};
vector<int>b{4,5,6,9,7,8};

vector<int>ans;
// pushing all elements of first array 
for(int i =0; i < a.size() ; i++)
{
   ans.push_back(a[i]);

}

// pushing all elements of second array 
for(int i =0; i < b.size() ; i++)
{
   ans.push_back(b[i]);

}

for(int i=0; i<ans.size();i++)
{
    cout<< ans[i]<< " ";
}

*/// q-3 inter section 


/* vector<int>a{ 1,2,3,4};
vector<int>b{3,3,4,5,6,9,7,8};

vector<int> ans;

for(int i =0 ; i<a.size(); i++)
{
     for(int j=0;j<b.size();j++)
     { 
        if(a[i]==b[j])
        {   b[j]=INT_MIN;
            ans.push_back(a[i]);
        }
     }
}

for( auto value : ans)
{
    cout<< value <<" ";
}
 


*/ 
/////////     q-4   /////////////// pair sum 

/*vector<int>pair{ 1,3,5,7,2,4,6,8};
 
int sum;
cout<<"enter the sum value";
cin>>sum;

for( int i= 0 ; i < pair.size(); i++)
{  
    
for( int j=0  ; j < pair.size(); j++)
{
    for( int k = 0 ; k <pair.size() ; k++ )
    {
        if(pair[i]+pair[j]+pair[k]==sum)
    {
        cout<<"the pair is"<< " "<<"("<<pair[i]<<","<<pair[j]<<","<<pair[k]<<")"<<endl;

    }
    }
}

}

*/
 ///////// q-5 sort zeoes and ones

// vector<int>arr{1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1};




}
