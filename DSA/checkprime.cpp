#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int sum=0;
 int i;
 int num;
 cin>>num;
 
 int copy=num;
 while(num!=0)
 {   
      int digit = num%10;
      sum=pow(digit,3)+sum;
      num=num/10;
      
  
 }

 if(copy==sum)
 {
    cout<<"arstrong number";
 }
 else
 {
    cout<<" not armstong";
 }

}
