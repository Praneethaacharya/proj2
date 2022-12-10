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
        cout << curr->data << endl;
        curr = curr->next;
    }
}
Node *insertbeg(Node *head, int data)
{
    Node *curr = head;
    Node *first;
    first = new Node(data);
    first->next = curr;
    return first;
}

int main()
{
    Node *head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(130);
    head->next->next->next = new Node(410);
    head = insertbeg(head, 9890);
    head = insertbeg(head, 980);
    printlist(head);
    return 0;
}