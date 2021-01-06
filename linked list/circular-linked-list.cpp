#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
// inserting at beginning 
void push(Node** last_ptr, int n) {
    Node *newNode = new Node();
    newNode->data = n;
    if(*last_ptr == NULL) {
        *last_ptr = newNode;
        newNode->next = *last_ptr;
    }
    else {
        newNode->next = (*last_ptr)->next;
        (*last_ptr)->next = newNode;
    }
}

void printList(Node* first) {
    Node* temp = first;
    do {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    while (temp != first);
}

int main() {
    Node* last = NULL;
    push(&last, 12);
    push(&last, 56);
    push(&last, 9);
    push(&last, 40);

    printList(last->next);
}