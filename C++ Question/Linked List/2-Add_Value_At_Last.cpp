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
int main(){
node * head=NULL;
addAtLast(head,1);
addAtFirst(head,0);
return 0;
}