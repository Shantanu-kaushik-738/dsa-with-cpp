#include <bits/stdc++.h>
using namespace std;

class Node
{ // class for define node
public:
    int data;
    Node *next; // pointer for next node

    Node(int x)
    {
        data = x;    // data initialilize
        next = NULL; // next node -> null
    }
};

class List
{               // class for manage node
    Node *head; // first node of list
    Node *tail; // last node of list

public:
    List()
    { // constructor / head or tell -> null of new list
        head = tail = NULL;
    }

    void push_front(int x)
    {                                // insert value
        Node *newNode = new Node(x); // new Node { dynamic }

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head; // next of newNode is old head
            head = newNode;       // new head of new Node
        }
    }

    void push_back(int x)
    {
        Node *newNode = new Node(x);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode; // next of tail is newNode
            tail = newNode;       // new tail of new Node
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << " List is empty " << endl;
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next; // update head to head->next
            temp->next = NULL; // update temp->next to NULL

            delete temp;
        }
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << " List is empty " << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next; // update temp upto null - 1
            }

            temp->next = NULL; // update temp to last el
            delete tail;
            tail = temp; // store temp value in tail
        }
    }

    void insert(int pos, int v)
    {
        if (pos < 0)
        {
            cout << "invalid position !" << endl;
            return;
        }

        if (pos == 0)
        {
            push_front(v);
            return;
        }

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        Node *newNode = new Node(v);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printll()
    {                      // traverse in list
        Node *temp = head; // temp pointer for linked list traverse

        while (temp != NULL)
        {
            cout << temp->data << " -> "; // print node data
            temp = temp->next;            // update temp
        }
        cout << "Null " << endl;
    }

    int search(int k)
    {
        Node *temp = head;
        int i = 0;

        while (temp != NULL)
        {
            if (temp->data == k)
            {
                return i;
            }
            temp = temp->next;
            i++;
        }
        return -1;
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);

    ll.pop_front();
    ll.pop_back();

    ll.insert(2, 7);

    ll.printll(); // print link list

    cout << ll.search(7) << endl; // 2

    return 0;
}