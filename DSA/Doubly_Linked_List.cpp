#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getlength(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

/////////////////////// insertion ////////////////////

void insertathead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        node *newnode = new node(data);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertattail(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    node *newnode = new node(data);

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_position(node *&head, node *&tail, int position, int data)
{ // case 1 NUll linked list
    if (head == NULL)
    {
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
    }

    // case 2   At position 0 ->  insertion at head;

    else if (position == 0)
    {
        insertathead(head, tail, data);
    }
    // case 3   At position last->  insertion at tail;

    else if (position >= getlength(head))
    {
        insertattail(head, tail, data);
    }

    ///  case 4; insertion in middle;

    else
    {
        node *newnode = new node(data);

        node *before = head;

        int i = 1;
        while (i < position)
        {
            before = before->next;
            i++;
        }

        node *current = before->next;

        newnode->next = current;
        current->prev = newnode;

        before->next = newnode;
        newnode->prev = before;
    }
}


node * revd(node * head)
{   node* current=head;
    node * left=NULL;
    node*right =current->next;
 
    while(right!=NULL)
    {
       current->next=left;
       current->prev=right;
       left=current;
       current=right; 
       right=current->next;
       
    }

       current->next=left;
       current->prev=right;
      
    return current;
    
}

// node* revd(node* head)
// {
//     node* current = head;
//     node* left = NULL;
//     node* right = NULL;

//     while (current != NULL)
//     {
//         right = current->next;
//         current->next = left;
//         current->prev = right;
//         left = current;
//         current = right;
//     }

//     head = left;

//     if (head != NULL)
//     {
//         while (head->next != NULL)
//         {
//             head = head->next;
//         }
//     }

//     return head;
// }




////////////////////// Deletion ///////////

void delete_position(node *&head, node *&tail, int position)
{
    int length = getlength(head);

    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }

    // else if (head->next == NULL)
    // {
    //     delete head;
    // }

    else if (position == 1)
    {
        node *temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
        return;
    }

    else if (position > length || position == 0)
    {
        cout << "plaese enter the vallid position" << endl;
    }

    else if (position == length)
    {
        node *temp = tail;
        tail = temp->prev;
        temp->prev->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    /// deletion in the middle

    else
    {
        node *left = head;
        int i = 1;
        while (i < position - 1)
        {
            left = left->next;
            i++;
        }
        node *current = left->next;
        node *right = current->next;

        left->next = right;
        right->prev = left;

        current->next = NULL;
        current->prev = NULL;

        delete current;
    }
}

int main()
{

    //     node *first = new node(10);
    //     node *second = new node(20);
    //     node *third = new node(30);

    // first->next=second;
    // second->prev=first;

    // second->next=third;
    // third->prev=second;
    node *tail = NULL;

    node *head = NULL;

    insertathead(head, tail, 5);
    insertathead(head, tail, 2);
    insertathead(head, tail, 7);
    insertathead(head, tail, 55);
    insertathead(head, tail, 15);

    insertathead(head, tail, 12);

    insertathead(head, tail, 22);

    insertathead(head, tail, 21);
    
    print(head);
    
    
    cout<<endl;


    head=revd(head);


    print(head);
   
}
  
   

 /////////////////////////////// LINKED LIST QUESTION /////////////////////////////////////////////////////////////////////////////////////
 
  
 
 
 
 
 
 
 





