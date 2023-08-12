#include <iostream>
#include <cmath>

using namespace std;

/*class stack
{
    int size;
    int * arr;
    int top;

   stack()

   { this->arr= new int[size];
    this->size=size;
    this->top=-1;
   }
};
*/
class stack
{
    int size;
    int * arr;
    int top;

   stack()

   { this->arr= new int[size];
    this->size=size;
    this->top=-1;
   }
};

/*class stack
{  
    public: 

    int *arr;
    int size;
    int top1;
    int top2;

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            arr[top1] = data;
            top1++;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }

    void push2(int data)
    {
        if (top2 - top1 > 1)
        {
            arr[top2] = data;
            top2--;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }

   
};*/

int main()
{

    // stack<int>st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // st.pop();

    // // element on top

    // cout<<"element on top is "<< st.top()<<endl;

    // // size

    // cout<<"size of stack is "<< st.size()<<endl;

    // if(st.empty())
    // {
    //     cout<<"stack is empty"<<endl;
    // }

    // else
    // {
    //     cout<<"stack is not empty"<<endl;

    // }

    // while(!st.empty())
    // {
    //     cout<<st.top()<< " ";
    //     st.pop();
    // }

    // stack s(10);

    // s.push1(50);
    // s.push1(40);
    // s.push1(30);
    // s.push1(20);
    // s.push1(10);

    // while()



    return 0;
}