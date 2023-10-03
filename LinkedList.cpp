#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node (int val)
    {
        data =val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if (head==NULL)
    {
        head=n;
        return;
    }
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
    return;
    
}

void display(node* head)
{
    node* temp=head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void dele(node* &head, int val)
{
    node* temp=head;
    node* todelete;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,9);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    dele(head,3);
    display(head);
}