#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node (int val){
        data=val;
        next=nullptr;
    }
    void insertAtHead(node* head, int val){
        node* n=new node(val);
        if (head==nullptr){
            n->next=n;
            head=n;
            return;
        }
        node* temp=head;
        while(temp->next!=head){
            temp->next=temp->next;
        }
        temp->next=n;
        head=n;
    }
    void insertAtTail(node* head, int val){
        node* n=new node(val);
        node* temp=head;
    
        if(head==nullptr){
            insertAtHead(head,val);
            return;
        }
        temp->next=temp->next;
        temp->next=n;
        head=n;
        
    }
    void display(node * head){
        node* temp=head;
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp->next=temp->next->next;
        }
        cout<<endl;
    }
};
int main()
{
    node * head=nullptr;
    insertAtTail(head,4);
    insertAtTail(head,6);
    insertAtTail(head,8);
    display(head);
    insertAtHead(head,1);
    insertAtHead(head,3);
    insertAtHead(head,7);
}