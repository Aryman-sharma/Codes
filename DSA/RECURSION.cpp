#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*int factorial(int n)
{   cout<< "function is called for n :" << n << endl;

  if(n==1)
   {
    return 1 ;
   }
  int chotiproblem= factorial(n-1);
  int ans = n* chotiproblem;
  return ans;
}  */

/*int fibonnaci_term(int n)
{
  if (n==1)
  {
    return 0;
  }
  if(n==2)
  {
    return 1;
  }
  int ans = fibonnaci_term(n-1)+fibonnaci_term(n-2);
  return ans;

}*/

/*int  max_element(int arr[],int n) ///////// withot recursion
{
   int min=INT_MAX;
   for(int i=0;i<n;i++)
   {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  return min;
}*/

/*int steps(int n)
{
  if(n==0 || n==1)
  return 1;

  return steps(n-1) + steps(n-2);
}*/

/*void printarr(int arr[],int size,int i)
{

  if(i>size-1)
  {return;}



  printarr(arr,size,i+1);
 cout<< arr[i] << " " ;
}*/

/*void maxelement(int arr [],int n ,int i,int& maxi)
{
  // base case
  if(i>=n)
  {
    return ;
  }
  //// ek kaam hamara
  if(arr[i]>=maxi)
  {
    maxi = arr[i];
  }
  // recursion sambhal lega

  maxelement(arr,n,i+1,maxi);

}*/

/*void minielement(int arr[],int n ,int i ,int& mini)
{
 if(i>=n)
 {
   return;
 }
 if(arr[i]<mini)
{
 mini=arr[i];
}
minielement(arr,n,i+1,mini);
}
*/

/*void findkey(string& s,int& n,int i,char& key,int& count)
{
  if(i>=n)
  {
    return;

  }

  if(s[i]==key)
  {
    count++;
  }

 findkey(s,n,i+1,key,count);

}
*/

/*bool checksorted(vector<int> &v, int &n, int i)
{ /// base case
  if (i == n - 1)
  {
    return 1;
  }
  /////   recursive relation /

  if (v[i + 1] >= v[i])
  {
    return checksorted(v, n, i + 1);
  }
  else
  {
    return false;
  }
}*/

/*int recursivebinarysearach(vector<int>&v,int i ,int j, int key)
{
//// base case  ///////;
if(i>j)
{
  return 0;
}
//////////////////
int mid =(i+j)/2;


if(v[mid]==key) /// ek case mera
{
  return true;
}

//// ek case me sove krunga /// but here are two recursive relation

if(v[mid]<key)/// right search
{
  return recursivebinarysearach(v,mid+1,j,key);
}
else
{
  return recursivebinarysearach(v,i,mid-1,key);

}


}*/

/*nt solve(int arr[],int target,int& n)
{
  if(target==0)
  {
    return 0;
  }
  if(target < 0)
  {
    return INT_MAX;
  }
  int mini = INT_MAX;
  for(int i =0;i<n;i++)
  {
    int ans=solve(arr,target-arr[i],n);
    if(ans!=INT_MAX)
    {
      mini=min(mini,ans+1);
    }


  }
  return mini;

}*/

/*int solve(int arr[],int target,int& n)
{
  if(target==0)
  {
    return 0;
  }
  if(target < 0)
  {
    return INT_MIN;
  }
  int maxi = INT_MIN;
  for(int i =0;i<n;i++)
  {
    int ans=solve(arr,target-arr[i],n);
    if(ans!=INT_MIN)
    {
      maxi=max(maxi,ans+1);
    }
    else
    {
      return 0;
    }


  }
  return maxi;

}*/

/*void maxsumnonadjacent(int arr[],int i,int& n, int sum,int& maxi)
{
  if(i>=n)
  {
    maxi=max(sum,maxi);
    return;
  }

// EXCLUDE
maxsumnonadjacent(arr,i+1,n,sum,maxi);

// include
maxsumnonadjacent(arr,i+2,n,sum+arr[i],maxi);

}*/

/*int findxlastindex(string&s , int i ,char x, int& store)
{
  if(i>=s.length())
  {
    return store;
  }

  if(s[i]==x)
  {
     store=i;
     cout<<store<<endl;
  }

  return findxlastindex(s,i+1,x,store);
}*/

/*void removepartstring(string &s, string part)
{
  int index;
  index = s.find(part);
  // base case
  if (index == string::npos)
  {
    return;
  } 

  else 
  {
    s.erase(index, part.length());
    removepartstring(s, part);
  }
}*/


int main()
{

  //  int n;
  //  cout<< "enter the value of n for which you want the fibbonaci numer"<<endl;
  //  cin>>n;
  //   int ans = fibonnaci_term(n);
  //  cout<< "The nth term is "<< ans<< endl;

  // int arr[5]={36,72,9,8,1};
  // int min = max_element(arr,5);
  // cout<<"The minimum element in an array is " << min <<endl;

  // int n ;
  // cout<<"enter the value of number of stairs"<<endl;
  // cin>>n;
  // int ans =steps(n);
  // cout<<"The total number of ways to reach the nth stair are "<<ans<<endl;

  // int arr[]={1,2,3,4,5,6,7,8,88,56};
  // int size =sizeof(arr)/sizeof(int);
  // int i=0;
  // int maxi = INT_MIN;
  // int mini=INT_MAX;
  // maxelement(arr,size,i,maxi);
  // minielement(arr,size,i,mini);
  // cout<<"the maximum and minimmum numbes are  " << maxi << " , " << mini;

  // string str = "callmedaddyyyyyyyyyyyyyy";
  // int n=str.length();
  // vector<int> ans;
  // int i=0;
  // int count=0;
  // char key='y';

  // findkey(str,n,i,key,count);
  // // for(auto val : ans)
  // // {
  // //   cout<<val<< " " ;
  // // }

  //   vector <int> v{2,6,7,9,12,11};
  // int n =v.size();
  // int i=0;
  // bool k= checksorted(v,n,i);

  // if(k==1)
  // {
  //   cout<<"the vector is sorted";
  // }
  // else
  // {
  //   cout<<"not sorted";
  // }

  //// *******************     *--* BINARY SEARCH USING RECURSION   *--* -------------

  // vector<int>v{1,13,15,19,25,2156567};
  // int n=v.size();
  // int i=0;
  // int j= n-1;
  // int key =0;

  // bool isfound=recursivebinarysearach(v,i,j,key);

  // if(isfound)
  // {
  //   cout<<"found"<<endl;
  // }
  // else
  // {
  // cout<<"not found"<<endl;
  // }

  // int arr[]={5,2,2};
  // long long int target;
  // int n=sizeof(arr)/sizeof(int);
  // cin>>target;

  // int val= solve(arr,target,n);
  // cout<<val;

  // int arr[]={2,1,4,9};
  // int n=sizeof(arr)/sizeof(int);
  // int i=0;
  // int sum=0;
  // int maxi= INT_MIN;

  // maxsumnonadjacent(arr,i,n,sum,maxi);

  // cout<<maxi;

  // string s;
  // cin>>s;

  // // char x;
  // // cin>>x;

  // int i=0;
  // int j=s.length()-1;

  // // int store=-1;

  // int index=findxlastindex(s,i,x,store);

  // cout<<"index of last element is "<< index <<endl;
  // string s;
  // cin >> s;
  // string part;
  // cin >> part;
  // removepartstring(s, part);

  // cout << s;
  
  int arr[5]={1,2,3,4,5};
  int n=5;

  


}

