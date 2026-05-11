#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;

    Node(int x)
    {
        data = x;
        next = pre = NULL;
    }
};

class doubly_list
{
public:
    Node *head;
    Node *tail;

    doubly_list()
    {
        head = tail = NULL;
    }

    void push_front(int x)
    {
        Node *newNode = new Node(x);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head; // connect with next node
            head->pre = newNode;  // connect with pre node
            head = newNode;       // declear new node to new head
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
            newNode->pre = tail;  // connect with pre node
            tail->next = newNode; // connect with next node
            tail = newNode;       // declear new node to new tail
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << " List is empty " << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->pre = NULL;
        }

        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << " List is empty " << endl;
            return;
        }

        Node *temp = tail;
        tail = tail->pre;

        if (tail != NULL)
        {
            tail->next = NULL;
        }

        delete temp;
    }

    void print()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "\" NULL \"" << endl;
    }
};

int main()
{
    doubly_list dll;

    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);

    dll.pop_front();
    dll.pop_back();

    dll.print();

    return 0;
}