#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Node() {
    //         this->data = 0;
    //         this->next = NULL;
    // }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // TODO: Write a destrcutor to delete a node
    ~Node()
    {
        // write your code here
        cout << "Node with value: " << this->data << "deleted" << endl;
    }
};
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1:
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1: creatae a node
    Node *newNode = new Node(data);
    // step2: connect woth tail ndoe
    tail->next = newNode;
    // step3: update tail;
    tail = newNode;
}
void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

// q1

/*Node *middleelement(Node *&head, int length)
{
    if (length == 1)
    {
        return head;
    }

    else if (length % 2)
    {
        int i = 1;
        Node *temp = head;
        while (i < (length / 2))
        {

            temp = temp->next;
            i++;
        }
        return temp->next;
    }

    else
    {
        int i = 1;
        Node *temp = head;
        while (i < (length / 2))
        {

            temp = temp->next;
            i++;
        }
        return temp;
    }
}
*/
Node *getmiddle(Node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    else if (head == NULL)
    {
        cout << "linklist is empty" << endl;
    }

    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
}

Node *reverseknodes(Node *head, int k)
{
    Node *current = head;
    Node *prev = NULL;
    Node *temp = current->next;

    if (head->next == NULL)
    {
        return head;
    }

    if (k > getLength(head))
    {
        int len = getLength(head);
        int i = 0;
        while (i < len)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
            i++;
        }
        if (current != NULL)

        {
            head->next = reverseknodes(current, k);
        }

        return prev;
    }

    // reverse first ke elements
    int len = getLength(head);
    int i = 0;
    while (i < k)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        i++;
    }

    if (current != NULL)
    {
        head->next = reverseknodes(current, k);
    }

    return prev;
}

Node *reverselinkedlist(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    // Node *temp = current->next;

    while (current != NULL)
    {
        Node *temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

int loopdetection(Node *&head)
{
    int count = 0;
    if (head == NULL)
    {
        return 0;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)

        {

            return true;
        }
    }

    return false;
}

/*Node *startingpointofloop(Node *head)
{

    int count = 0;
    if (head == NULL)
    {
        return 0;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)

        {
            fast = head;
            while (fast != slow)
            {

                fast = fast->next;
                slow = slow->next;

                if (fast == slow)

                {
                    return fast;
                }
            }
        }
    }

    return NULL;
}*/

Node *startingpointofloop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)

        {
            fast = head;
            break;
        }
    }
    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}

Node *removeloop(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (fast == slow)

        {
            fast = head;
            break;
        }
    }
    Node *prev = slow;
    while (fast != slow)
    {
        prev = slow;
        fast = fast->next;
        slow = slow->next;
    }

    prev->next = NULL;
    return head;
}

bool ispalindrome(Node *&head)
{  
    if(head==NULL)
 {
    cout<<"LL is Empty"<<endl;
    return false;
 }

    Node *middle = getmiddle(head);
    middle->next = reverselinkedlist(middle->next);

    print(head);
    cout << endl;

    Node *temp1 = head;
    Node *temp2 = getmiddle(head)->next;

    while (temp2 != NULL)
    {

        if (temp1->data == temp2->data)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return false;
    }

    return true;
}

Node* removeduplicattes(Node*head)
{
    if(head==NULL)
    {
        cout<<"LInked list is empty"<<endl;
        return NULL;

    }
    else if(head->next==NULL)
    {
        return head;
    }
    else
    {
        
        Node*current=head;
        Node*temp=current->next;

        while(temp!=NULL)
        {  
           if(current->data != temp->data)
           {  
             current=current->next;
             temp=temp->next;
           }
           else
           {
            temp=temp->next;
            current->next=temp;
           }
         } 

         return head;




    }
  


}

Node* sortzeroesadnones(Node*head)
{

     

}

int main()
{

    // Node *head = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);
    // Node *sixth = new Node(60);
    // Node *seventh = new Node(70);
    // Node *eighth = new Node(80);
    // Node *ninth = new Node(90);
    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;
    // seventh->next = eighth;
    // eighth->next = ninth;
    // ninth->next = NULL;

    
    Node *tail = NULL;
    
    Node *head = new Node(2);
    insertAtHead(head, tail,1 );
    insertAtHead(head, tail,2 );
    insertAtHead(head, tail,0);
    insertAtHead(head, tail,0 );
    insertAtHead(head, tail,0 );
    insertAtHead(head, tail,1 );
    insertAtHead(head, tail,1 );
    insertAtHead(head, tail,2 );


    print(head);

    cout<<endl;
    

    

   
   
 
}
