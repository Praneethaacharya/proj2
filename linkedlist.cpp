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

int main()
{
    Node *curr;
    Node *head;
    curr = NULL;
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    cout << head->data << endl;
    cout << temp1->data << endl;
    cout << temp2->data << endl;
    head->next->next->next = new Node(40);
    cout << head->next->next->next->data << endl;
    return 0;
}