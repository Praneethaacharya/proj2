
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

Node *insertbeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertend(Node *head, int x)
{
    Node *temp = new Node(x);
    Node *curr = head;
    while (curr->next != NULL)
    { 
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *deleteends(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
        curr = curr->next;
    delete (curr->next);
    curr->next = NULL;
    return head;
}

Node *deletebeg(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *curr = head;

    curr = curr->next;
    delete (head);
    return curr;
}

int main()
{
    Node *head = new Node(19);
    head->next = new Node(20);
    head->next->next = new Node(33);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(58);
    printlist(head);
    head = deleteends(head);
    printlist(head);
    head = deletebeg(head);
    head = deletebeg(head);
    printlist(head);
    head = insertbeg(head, 90);
    printlist(head);
    head = insertend(head, 80);
    printlist(head);

    return 0;
}