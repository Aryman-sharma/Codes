#include <bits/stdc++.h>
using namespace std;

void print_num(int n)
{
    // base case
    if (n==0)
    {
        return ;
    }
    cout << n << " ";
    print_num(n-1);
    
}
int printsum(int n ,int&sum )
{
    if(n==1)
    {
        return 1;
    }
    
    int ans =n+printsum(n-1,sum);
  
  return  ans;
}
void printarray(int arr[],int i,int n)
{
  if(i>n-1)
  {
    return;
  }
  
  cout<<arr[i]<<endl;

  printarray(arr,i+1,n);

}
int countdigits(int n,int count)
{
    if(n==0)
    {
        return count;
    }
  count++;
    
    return countdigits(n/10,count);
}
int sumofdigits(int n,int sum)
{
    
    if(n==0)
    {
        return sum;
    }
    sum=sum+(n%10);
    
    return sumofdigits(n/10,sum);

}
int maxarray(int arr[],int i,int n,int max)
{
 if(i>=n)
 {
    return max;
 }
 if(arr[i]>max)
 {
    max=arr[i];
 } 
 return maxarray(arr,i+1,n,max);
  
}
void reversestring(string s ,int i,int j)
{
    if(i>j)
    {
        cout<<s;
        return;
    }
    else
    {
        swap(s[i],s[j]);
    }
    reversestring(s,i+1,j-1);
}
void decimaltobinary(int n,vector<int>&v)
{
    if(n==0)
    {
        return ;
    }
    
        decimaltobinary(n/2,v);

        int val=n%2;
        v.push_back(val); 
    
}
void printevenodd(int n ,vector<int>&a,vector<int>&b)
{
   if(n==1)
   {
    b.push_back(n);
    return ;
   }
   printevenodd(n-1,a,b);

   if(n%2==0)
   {
    a.push_back(n);
   }
   else
   {
     b.push_back(n);
   }
   

}
bool isprime(int n , int i)
{
    if((n-i)==2)
    {
        return 1;
    }
    int div=n-i;
    int val = (n)%div;
    if(val==0)
    {
        return 0;
    }
    return isprime(n,i+1);
}
bool ispalindrome(string s ,int i ,int j)
{
    if(i>j)
    {
        return 1;
    }
    if(s[i]==s[j])
    {
       return ispalindrome(s,i+1,j-1);
    }
    else
    {
       return 0;
    }
}
int power(int base,int pov)
{
  if(pov==0)
  {
    return 1 ;
  }
  
  int val= base * power(base,pov-1);
  return val;
   
  
}
void hailstone(int n,vector<int>&v)
{
    if(n==1)
    {
       v.push_back(n);
       return;
    }
    int val=n%2;
    
    if(val==0)
    {   
        v.push_back(n);
        hailstone(n/2,v);
    }
    else
    {
      v.push_back(n);
      hailstone((3*n+1),v);
      
    }

}

int main()
{ 

  string s;
  cin>>s;
  int i=0;
  int j= s.length()-1;


  int val=ispalindrome(s,i,j);
  cout<<val;

}