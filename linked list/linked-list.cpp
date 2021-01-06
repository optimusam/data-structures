#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

// insert at end
int main() {
    int arr[] = {12,34,5,96,7};
    Node *head=NULL, *temp;
    temp=head;

    for(int el: arr) {
        if(head==NULL) {

            Node* newNode = new Node();
            newNode->data = el;
            newNode->next = NULL;
            head = newNode;
            temp=head;
        }
        else {

            Node *newNode = new Node();
            newNode->data = el;
            newNode->next = NULL;
            head->next = newNode;
            head=newNode;
        }
    }
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
}
    }