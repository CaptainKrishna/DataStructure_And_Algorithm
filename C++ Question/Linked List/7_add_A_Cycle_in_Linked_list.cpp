#include<bits/stdc++.h>
using namespace std;
// Creating a Node in Linked List
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
// insert at Last in Linked List
void addAtLast(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
// Add At Head in Linked List
void addAtHead(node* &head,int val){
    node* n=new node(val);
    head=n;
    n->next=head;
}
// Creating A cycle At Linked List
void makeCycle(node* &head,int pos){
    
    node* temp=head;
    node* startnode;
    int count=1;

    while(temp->next!=NULL){
    
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
void Display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
   node* head=NULL;
    addAtLast(head,1);
    addAtLast(head,2);
    addAtLast(head,3);
    addAtLast(head,4);
    addAtLast(head,5);
    Display(head);
    // makeCycle(head,3);
    Display(head);
return 0;
}