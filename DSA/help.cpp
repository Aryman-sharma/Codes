#include <iostream>
using namespace std;

class ListNode
{
public:
        int data;
        ListNode *next;

        ListNode(int data)
        {

                this->data = data;
                this->next = NULL;
        }
};
void print(ListNode *head)
{

        ListNode *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(ListNode *&head)
{
        int len = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
                temp = temp->next;
                len++;
        }
        return len;
}

void findtail(ListNode *&head, ListNode *&tail)

{

        ListNode *temp = head;
        int i = 1;
        while (i <= findLength(head) - 1)
        {
                temp = temp->next;
                i++;
        }
        tail = temp;
}

ListNode *reverse(ListNode *head)
{
        if (head == NULL)
        {
                return NULL;
        }

        ListNode *current = head;
        ListNode *temp = current->next;

        ListNode *prev = NULL;

        while (current != NULL)
        {
                cout << current->data << " ";
                temp = current->next;
                current->next = prev;
                prev = current;
                current = temp;
        }
        return prev;
}

/*ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

        int number1 = reverse(l1);
        cout << number1 << endl;

        int number2 = reverse(l2);
        cout << number2 << endl;

        int final = number1 + number2;
        cout << final << endl;

        ListNode *head = new ListNode(final % 10);
        cout << head->data << endl;

        int newfinal = final / 10;
        cout << newfinal << endl;

        cout << "-------------------------------------------------------------------------------" << endl;
        while (newfinal != 0)
        {

                int digit = newfinal % 10;
                cout << digit << endl;

                ListNode *temp = new ListNode(digit);

                temp->next = head;
                head = temp;

                newfinal = newfinal / 10;
        }

        return head;
}*/
bool isPalindrome(ListNode *head)
{
        ListNode *slow = head;
        ListNode *fast = head->next;

        if (head == nullptr || head->next == nullptr)
        {
                return true;
        }

        while (fast != NULL)
        {
                fast = fast->next;
                if (fast != NULL)
                {
                        fast = fast->next;
                        slow = slow->next;
                }
        }
        print(head);
        cout << endl;

        slow->next = reverse(slow->next);
        cout << endl;

        print(head);

        ListNode *first = head;

        ListNode *second = slow->next;

        // cout<<second->data<<endl;

        while (second != NULL)
        {
                if (first->data == second->data)
                {
                        first = first->next;
                        slow = slow->next;
                }

                else
                {
                        return 0;
                }
        }

        return 1;
}
ListNode *maza(ListNode *&head, int &carry)
{
        if (head == NULL)
        {
                return head;
        }

        ListNode *current = head;

        head = head->next;
        current = head;
        cout << current->data << " ";
        maza(head, carry);

        current->data = (current->data + carry) % 10;
        carry = (current->data + carry) / 10;

        return current;
}
ListNode *addOne(ListNode *head)
{
        if (head->next = NULL)
        {
                head->data = head->data + 1;
                return head;
        }
        if (head == NULL)
        {

                return NULL;
        }
        int carry = 1;

        head = maza(head, carry);

        return head;
}

ListNode *mergeList(ListNode *p, ListNode *q)
{
        ListNode *current1 = p;
        ListNode *current2 = q;

        ListNode *temp1 = (p)->next;
        ListNode *temp2 = (q)->next;

        while (temp1 != NULL || temp2 != NULL)
        {
                if (temp1 == NULL)
                {
                        if (current1 != NULL)

                        {
                                current1->next = current2;
                                current1 = NULL;
                        }

                        current2->next = temp2;
                        current2 = temp2;
                        temp2 = temp2->next;
                }

                else if (temp2 == NULL)
                {
                        if (current2 != NULL)
                        {
                                current1->next = current2;
                                current1 = temp1;
                                temp1 = temp1->next;

                                current2->next = current1;
                                current2 = NULL;
                        }
                        current1 = temp1;

                        temp1 = temp1->next;

                        current1->next = temp1;
                }
                else

                {
                        current1->next = current2;
                        current1 = temp1;
                        temp1 = temp1->next;
                        current2->next = current1;
                        current2 = temp2;
                        temp2 = temp2->next;

                        if (current1->next == NULL && current2->next == NULL)
                        {
                                current1->next = current2;
                                current2->next = NULL;
                        }
                }
        }

        return p;
}

int main()
{
        ListNode *tail = NULL;
        ListNode *first = new ListNode(10);
        ListNode *second = new ListNode(9);

        ListNode *third = new ListNode(3);

        first->next = second;
        second->next = third;

        ListNode *tail1 = NULL;
        ListNode *first1 = new ListNode(6);
        // ListNode *second1 = new ListNode(1);
        // ListNode *third1 = new ListNode(2);

        // first1->next = second1;
        // second1->next = third1;

        first = mergeList(first, first1);

        print(first);
}