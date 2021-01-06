#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
};

//insert at beginning
void push(Node** head_ptr, Node** tail_ptr, int n) {
    if(*head_ptr == NULL) {
        Node* newNode = new Node();
        newNode->data = n;
        newNode->prev=NULL;
        newNode->next=NULL;
        *tail_ptr = newNode;
        *head_ptr = newNode;
    }
    else {
        Node *newNode = new Node();
        newNode->data = n;
        newNode->next = *head_ptr;
        newNode->prev = NULL;
        (*head_ptr)->prev = newNode;
        *head_ptr = newNode;
    }
}
void printForward(Node* head) {
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

void printReverse(Node* tail) {
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    push(&head, &tail, 7);
    push(&head, &tail, 5);
    push(&head, &tail, 1);

    printForward(head);
    printReverse(tail);
}