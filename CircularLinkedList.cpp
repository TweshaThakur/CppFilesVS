#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next=nullptr;
    }
};
class CircularLinkedList{
    public:
    node* head;
    CircularLinkedList(){
        head=nullptr;
    }
    void insert(int val){
        node* newnode= new node(val);
        if (head==nullptr){
            head=newnode;
            newnode->next=head;
        }else{
            node* current=head;
            while(current->next!=head){
                current=current->next;
            }
            current->next=newnode;
            newnode->next=head;
        }
    }
    void printlist(){
        node* current=head;
        do{
            cout << current->data<<" ";
            current=current->next;
        }while(current!=head);
        cout<<endl;
    }
};
int main(){
    CircularLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.printlist();
}