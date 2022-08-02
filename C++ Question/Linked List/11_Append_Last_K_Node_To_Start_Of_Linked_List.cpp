#include <bits/stdc++.h>
using namespace std;

// Creating a Node in Linked List
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// insert at Last in Linked List
void addAtLast(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Add At Head in Linked List
void addAtHead(node *head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
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

// Creating A cycle At Linked List
void makeCycle(node *&head, int pos)
{

    node *temp = head;
    node *startnode;
    int count = 1;

    while (temp->next != NULL)
    {

        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

// Detecting A Cycle in Linked List
bool DetectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

// Display The Linked List
void Display(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// For Decting Function
void datap(bool n){
   if (n == 1)
    {
        cout << "Cycle present in Linked List" << endl;
    }
    else
    {
        cout << "Cycle are not present" << endl;
    }
}

// Removing A Cycle
void removeCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (slow->next != fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = NULL;
}

int main()
{
   
 
    return 0;
}