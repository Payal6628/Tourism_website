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
/***************reverse*************/
void reverse(Node **head)
{
    // Initialize current, previous and
    // next pointers
    Node *current = *head;
    Node *prev = NULL;
    Node *n = (*head)->next;

    while (current != NULL)
    {

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = n;
        if (n != NULL)
        {
            n=n->next;
        }
    }
    *head = prev;
}

/*********traversal***************/
void traversal(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
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
    cout << "linked list is ";
    traversal(head);
    cout << endl;
    reverse(&head);

    cout << "the reverse linked list is ";
    traversal(head);
}