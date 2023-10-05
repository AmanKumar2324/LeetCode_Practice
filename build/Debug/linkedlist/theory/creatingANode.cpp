#include <iostream>
using namespace std;

//creating a class to create a node

class Node{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val=data;
        next=NULL;
    }
};

//creating a function to insert the value at the head

void insertAthead(Node* &head,int data)
{
    Node* new_node= new Node(data);
    new_node->next=head;
    head=new_node;
}

//creating a function to insert the value at the tail

void insertAtTail(Node* &head, int data)
{
    Node* new_node= new Node(data);
    Node* temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=new_node;
}

//creating function to insert the value at any arbitrary position

void insertAtPosition(Node* &head, int val, int pos)
{
    if(pos==0)
    {
        insertAthead(head,val);
        return;
    }
    else
    {
        int current_pos=0;
        Node* new_node=new Node(val);
        Node* temp=head;
        while(current_pos!=pos-1)
        {
            temp=temp->next;
            current_pos++;
        }
        new_node->next=temp->next;
        temp->next = new_node ;
    }
}

//creating a function to update the value of teh linkedlist af any position

void updateAtPosition(Node* &head, int k, int val)
{
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=k)
    {
        temp=temp->next;
        curr_pos++;
    }
    temp->val=val;
}

//Deletion

//Deletion at head

void deleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    free(temp);
}

//Deletion at the tail

void deleteAtTail(Node* &head)
{
    Node* last_second=head;
    int curr_pos=0;
    while(last_second->next->next!=NULL)
    {
        last_second=last_second->next;

    }
    Node*temp = last_second->next;
    last_second->next=NULL;
    free(temp);
}

//deletion at any arbitrary points

void deleteAtArbitraryPoints(Node *&head , int pos)
{
    Node *temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1)
    {
        temp=temp->next;
        curr_pos++;
    }
    Node *toDelete=temp->next;
    temp->next=toDelete->next;
    free(toDelete);
}

//creating function to display the linkedlist

void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main()
{
    //creating the new node

    Node* n=new Node(1);
    display(n);
    Node* m= new Node(12);
    display(m);

    //creating the head

    Node* head= NULL;
    insertAthead(head , 50 );
    display(head);
    insertAthead(head,12);
    display(head);
    insertAtTail(head,2094);
    display(head);
    insertAtPosition(head,8823,2);
    display(head);
    updateAtPosition(head,2,2324);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    insertAthead(head , 24 );
    display(head);
    deleteAtArbitraryPoints(head,1);
    display(head);
    return 0;

}