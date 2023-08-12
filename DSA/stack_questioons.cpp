#include<iostream>
#include<stack>

using namespace std;

void reversestring(string str)
{
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

void getmiddleofstack(stack<int>&s,int totalsize)
{   int temp;
    int size=s.size();
    if(size==(totalsize/2)+1)
    {
        cout<<" middle element is "<<s.top()<<endl;
        return;
    }
    
    temp=s.top();
    s.pop();


    getmiddleofstack(s,totalsize);

    s.push(temp);



}

void solve(stack<int>&s, int target)
{
   if(s.empty())
   {
    s.push(target);
    return;
   }

   int temp= s.top();
   s.pop();

   solve(s,target);

   s.push(temp);
}

void insertatbottom(stack<int>&s)
{
    if(s.empty())
    {
        cout<<"stack is empty ";
        return;
    }

    int target =s.top();
    s.pop();

    solve(s,target);

}

void reversestack(stack<int>&s)
{   
  if(s.empty())
  {
    return;
  }

  int temp = s.top();
  s.pop();

  reversestack(s);

  solve(s,temp);

}

int main()
{

  stack<int>s;

  s.push(3);
  s.push(2);
  s.push(1);
  
  
 int totalsize=s.size();
  while(!s.empty())
 { 
    cout<<s.top()<<endl;
    s.pop();
 }

 reversestack(s);

//  while(!s.empty())
//  { 
//     cout<<s.top()<<endl;
//     s.pop();
//  }




 return 0;
  
}