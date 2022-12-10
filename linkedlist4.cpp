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
    cout << "\n\nThis is insert beginning:\n";
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    temp->next = curr;
    return temp;
}

Node *insertend(Node *head, int x)
{
    cout << "\n\nThis is insert end:\n";

    Node *temp = new Node(x);
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next == NULL;
    return head;
}

Node *deleteend(Node *head)
{
    cout << "\n\nThis is delete end:\n";

    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}

Node *deletebeg(Node *head)
{
    cout << "\n\nThis is delete beginning:\n";

    Node *curr = head;
    curr = curr->next;
    delete (head);
    return curr;
}

Node *insertatpos(Node *head, int pos, int x)
{
    cout << "\n\nThis is insert at position:\n";

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

Node *searchelement(Node *head, int x)
{
    cout << "\n\nThis is search element:\n";

    Node *curr = head;
    int i = 1;
    while (curr->data != x)
    {
        curr = curr->next;
        i++;
        if (curr->next == NULL)
        {
            cout << "No element";
        }
    }

    cout << "The data is: " << curr->data << " at position " << i;
    return 0;
}

Node *searchelementanddelete(Node *head, int x)
{
    cout << "\n\nThis is search element and delete it:\n";
    Node *curr = head;

    int i = 1;
    while (curr->next->data != x)
    {
        curr = curr->next;
        i++;
    }
    if (i == 1)
    {
        curr->next = NULL;
        delete (curr);
    }

    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = curr->next->next;
    cout << "Successfully deleted: " << curr->next->data << endl;

    delete (curr->next);
    curr->next = temp;
    return head;
}

Node *sortlist(Node *head)
{
    cout << "\n\nThis is sorting:\n";

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            Node *curr = temp->next;
            temp->next = temp;
            temp = curr;
            temp = temp->next;
        }
    }

    return temp;
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "  ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head;
    head = new Node(45);
    head->next = new Node(76);
    head->next->next = new Node(18);
    head->next->next->next = new Node(197);
    head->next->next->next->next = new Node(56);
    head->next->next->next->next->next = new Node(68);
    head->next->next->next->next->next->next = new Node(7);
    head = insertbeg(head, 95);
    // printlist(head);
    // head = insertend(head, 97);
    // printlist(head);
    // head = insertend(head, 96);
    // printlist(head);
    // head = deleteend(head);
    // printlist(head);
    // head = deletebeg(head);
    // printlist(head);
    // head = insertatpos(head, 3, 88);
    // printlist(head);
    // head = searchelement(head, 7);
    printlist(head);
    // head = searchelementanddelete(head, 56);
    // printlist(head);

    // head = searchelementanddelete(head, 197);
    // printlist(head);

    head = sortlist(head);
    printlist(head);

    return 0;
}