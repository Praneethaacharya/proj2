#include <iostream>
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

Node *insertatpos(int x, Node *head, int pos)
{
    Node *temp = new Node(x);
    if (pos == 1)
    {
        temp->next = NULL;
        return temp;
    }
    Node *curr = head;
    for (int i = 0; i < pos - 2; i++)
    {
        curr = curr->next;
    }
    if (head == NULL)
    {
        return temp;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

Node *deletebeg(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    temp = temp->next;
    delete (head);
    return temp;
}

Node *deleteend(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}

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

int main()
{
    Node *head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(68);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(26);
    head->next->next->next->next->next = new Node(80);
    head->next->next->next->next->next->next = new Node(90);
    printlist(head);
    head = deleteend(head);
    printlist(head);
    head = insertbeg(head, 6);
    head = insertbeg(head, 8);
    head = insertbeg(head, 9);
    printlist(head);
    head = insertend(head, 97);
    head = insertend(head, 99);
    printlist(head);
    head = insertatpos(55, head, 4);
    printlist(head);
    head = deletebeg(head);
    printlist(head);
    return 0;
}