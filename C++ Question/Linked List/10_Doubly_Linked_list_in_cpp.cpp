// Creating Our First Linked List Node 
#include<bits/stdc++.h>
using namespace std;
// Node Class
class node{
    public:
    int data;
    node *next;
    node *pre;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};
// Add value at Front
void addAtFirst(node* &head,int data){
    node* n=new node(0);
    n->next=head;
    if(head!=NULL){
        head->pre=n;
    }
    head=n;
}
// Add value at Last in Linked List 
void addAtLast(node* &head,int data ){
    node * n=new node(data);
    if(head==NULL){
        addAtFirst(head,data);
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->pre=temp;
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
    // if(head->next=NULL){
    //     deleteAt(head);
    //     return;
    // }
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
addAtLast(head,4);
addAtLast(head,5);
addAtLast(head,6);
// Display Linked List
Display(head);

return 0;
}