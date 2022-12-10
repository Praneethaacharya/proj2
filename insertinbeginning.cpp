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

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "-> ";
        curr = curr->next;
    }
}

Node *insertbeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{
    int n;
    Node *head = NULL;
    head = insertbeg(head, 10);
    head = insertbeg(head, 20);
    head = insertbeg(head, 30);

    printlist(head);
}