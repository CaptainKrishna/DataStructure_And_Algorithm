// Creating Our First Linked List Node 
#include<bits/stdc++.h>
using namespace std;
// Node Class
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// Add value at Last in Linked List 
void addAtLast(node* &head,int data ){
    node * n=new node(data);
    if(head==NULL){
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
// Add value at Front
void addAtFirst(node* &head,int data){
    node* n=new node(0);
    n->next=head;
    head=n;
}
// Delete Value at first
void deleteAt(node * &head){
    node * todelete=head;
    head=head->next;
    delete todelete;
}
// Delete Value 
void Delete(node* head,int data){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteAt(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=data){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
// Display First Linked List
void Display(node * head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
// Main Function
int main(){
node * head=NULL;
// Add at Last
addAtLast(head,1);
addAtLast(head,2);
addAtLast(head,3);
// add At First
addAtFirst(head,0);
// Display Linked List
Display(head);
// Delete Data
Delete(head,3);

Display(head);
return 0;
}