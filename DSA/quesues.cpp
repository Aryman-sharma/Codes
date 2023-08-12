#include <iostream>
#include <queue>
using namespace std;

/* class Queue
{
public:
   int front;
   int rear;
   int size;
   int *arr;

   Queue(int size)
   {   this->arr = new int[size];
       this->size = size;
       this->front = 0;
       this->rear = 0;


   }
   void push(int data)
   {
       if (rear == size)
       {
           cout << "queue is full" << endl;
       }
       else
       {
           arr[rear] = data;
           rear++;
       }
   }

   void pop()
   {

       if (front == rear)
       {
           cout << " queue is empty " << endl;
       }
       else
       {

           front++;

           if (front == rear)
           {
               rear = 0;
               front = 0;
           }
       }
   }
   bool isempty()
   {
       if (front == rear)
       {
           return true;
       }
       else
           return false;
   }
   int getsize()
   {
    return rear - front;
   }

   int frontelement()
   {
       if(front == rear )
       {
           cout<<" queue is empty "<<endl;
           return -1;
       }
       else
       {
           return  arr[front];
       }
   }


};
*/
class circularqueue
{
public:
    int front;
    int rear;
    int *arr;
    int size;

    circularqueue(int size)
    {
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->arr = new int[size];
    }

    void push(int data)
    {
        if (rear == size && front == 0)
        {
            cout << " queue is full" << endl;
        }

        else if (rear == size && front != 0)
        {
            rear = 0;
            arr[rear];
            rear++;
        }

        else
        {
            arr[rear] = data;
            rear++;
        }
    }
};

int main()
{ /*
     queue<int> q;

     q.push(5);
     q.push(6);
     q.push(67);
     q.push(65);

     q.pop();

     cout << q.size() << endl;
     cout << q.front() << endl;
     cout << q.back() << endl;
     */
    //-------------------------------------------------------------------

    circularqueue q(10);

    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);

    // cout << q.getsize()<<endl;
    // cout<< q.frontelement()<<endl;

    //-------------------------------------------------------------------

    // --------------------------------------------------------------------------

    return 0;
}