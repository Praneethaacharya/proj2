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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertelement(Node *head, int x)
{
    Node *curr = new Node(data);
    Node *temp = head;
    for (int i = 0; i < x; i++)
    {
        cin >> curr;
        temp = curr;
        temp = temp->next;
    }
    return head;
}

int main()
{
    int x;
    Node *head = new Node(x);

    printlist(head);
}
