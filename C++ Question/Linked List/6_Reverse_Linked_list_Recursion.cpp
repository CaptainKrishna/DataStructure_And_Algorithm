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

// reverse using Recursion Way
node* Nreverse(node* &head){
    // Base Condition
    if(head==NULL || head->next==NULL){
        return head;
    }
    // Making New Node   
    node* newnode=Nreverse(head->next);
    // NULL->1->2  TO  2->1 
    head->next->next=head;
    // NULL->1->2  TO  2->1->NULL 
    head->next=NULL;
   
    // 5->4->3->2->1->
    return newnode;

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