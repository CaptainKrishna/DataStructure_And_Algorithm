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

// Display First Linked List
void Display(node * head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

// reverse using itrative Way
node* Nreverse(node* &head){
    // using Three Pointer head ,Prev,head->next
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
// Main Function
int main(){
node * head=NULL;
addAtLast(head,1);
addAtLast(head,2);
addAtLast(head,3);
addAtLast(head,4);
addAtLast(head,5);

Display(head);
// 1->2->3->4->5->
node * Newhead=Nreverse(head);

Display(Newhead);
// 5->4->3->2->1->
return 0;
}