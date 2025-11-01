// program to reverse a linked list using push_front and push_back method to take input list
// Time complexity --> O(n)
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class List {
    ListNode* head;
    ListNode* tail;
public:
    List() : head(NULL), tail(NULL) {}

    void push_front(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    ListNode* getHead() { return head; }
    // Print function for convenience
    static void printList(ListNode* node) {
        while (node) {
            cout << node->val << " -> ";
            node = node->next;
        }
        cout << "NULL" << endl;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *next = NULL, *curr = head, *prev = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original List: ";
    List::printList(ll.getHead());

    Solution sol;
    ListNode* reversedHead = sol.reverseList(ll.getHead());

    cout << "Reversed List: ";
    List::printList(reversedHead);

    return 0;
}
