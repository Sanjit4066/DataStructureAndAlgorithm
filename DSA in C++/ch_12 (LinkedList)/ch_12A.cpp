// LinkedList
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)    //Time Complexity -> O(1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){     //Time Complexity -> O(1)
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    void pop_front(){   //Time Complexity -> O(1)
        if (head == NULL){
            cout<<"LL is empty\n";
            return;
        }
        
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
    }
    void pop_back(){     //Time Complexity -> O(n)
        if (head == NULL)
        {
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        while (temp->next != tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int val, int position){   //Time Complexity -> O(n)
        if(position<0){
            cout<<"Invalid Position\n";
            return;
        }
        if (position == 0)
        {
            push_front(val);
            return;
        }
        Node* temp=head;
        for (int i = 0; i < position-1; i++)
        {   
            if (temp == NULL)
            {
                cout<<"invalid position\n";
                return;
            }
            
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode -> next = temp -> next;
        temp -> next = newNode;  
    }
    int search(int key){   //Time Complexity -> O(n)
        Node* temp = head;
         int idx=0;
        while (temp != NULL)
        {
            if (temp -> data==key)
            {
                return idx;
            }
            temp = temp -> next;
            idx++;
        }    
        return -1;
    }
    void printLL() {   //Time Complexity -> O(n)
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        
    }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(6,3);
    ll.insert(10,4);
    ll.printLL();
    cout<<ll.search(10)<<endl;
    return 0;
}