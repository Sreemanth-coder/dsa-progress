#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
//singly linked list

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void InsertAtHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp=  new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position, int d){
    Node* temp=head;
    int cnt=1;

    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void print(Node* &head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int main(){
    Node* n1= new Node(10);//heap allocation
    //cout<<n1->data<<endl;
    Node* head=n1;
    Node* tail=n1;
    
    print(head);
    InsertAtTail(tail,13);
    print(head);

    InsertAtTail(tail,14);
    print(head);

    InsertAtPosition(head,tail,2,34);
    print(head);
    InsertAtPosition(head,tail,1,43);
    print(head);




}