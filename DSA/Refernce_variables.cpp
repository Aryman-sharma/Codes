#include<iostream>
using namespace std;

void caller (int*& value)
{
    value=value+1;


} 

int main()
{
    int a=6;
    
    int *ptr=&a;

    cout<<ptr<<endl;
    caller(ptr);
    cout<<ptr<<endl;

}