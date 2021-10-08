#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

/*********insertion beginning**************/
void insbeg(Node **head, int x)
{
    Node *n = new Node();
    n->data = x;
    n->next = *head;
    *head = n;
}
/***********count**************/
int count(Node *head)
{
    Node *p = head;
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
/************************************/
int main()
{
    Node *head = NULL;
    insbeg(&head, 1);
    insbeg(&head, 2);
    insbeg(&head, 3);
    insbeg(&head, 4);
    insbeg(&head, 5);
    cout << "count of nodes is " << count(head);
}