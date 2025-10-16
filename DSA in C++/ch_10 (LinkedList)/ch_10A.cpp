// code to insert a node between two nodes in a singly linkedList
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void insertAfter(Node* prevNode, int newData) {
    if (prevNode == nullptr) {
        cout << "The given previous node cannot be NULL!" << endl;
        return;
    }
    Node* newNode = createNode(newData);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    cout << "Original list: ";
    printList(head);

    insertAfter(head->next, 100);

    cout << "After inserting 100 between 20 and 30: ";
    printList(head);

    return 0;
}
