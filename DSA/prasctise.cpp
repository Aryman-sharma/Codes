#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;

    stack(int size)
    {
        this->top = -1;
        this->size = size;
        this->arr = new int[size];
    }
    void popbackinstack()
    {
        if(top==-1)
        {
            cout<<"stack is empty " <<endl;
        }
        else{
            arr[top]=0;
            top--;
        }
    }
    void pushinstack(int data)
    {
        if (top == size-1)
        {
            cout << "stack is full " << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
             return false;
        }
    }
    int gettop()
    { 
      if(top==-1)
      {
        cout<<" empty stack"<<endl;
      }
      
      return arr[top];
    }
    int getsize()
    {
        return top +1;
    }



} ;
    int main()
    {
        stack s(5);

        s.pushinstack(10);
        s.pushinstack(10);
        s.pushinstack(10);
        s.pushinstack(10);
        s.pushinstack(10);
       
        
        cout<<s.getsize()<<endl;

        while(!s.isempty())
        {
            cout << s.gettop() << endl;
            s.popbackinstack();

        }

        return 0;
    }