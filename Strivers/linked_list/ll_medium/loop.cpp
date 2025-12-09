#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


Node* createLinkedlist(vector<int>& values){
    if(values.empty()) return nullptr;
    Node* head=new Node(values[0]);
    Node*tail=head;
    for(int i=1;i<values.size();i++){
        tail->next=new Node(values[i]);
        tail=tail->next;
    }
    return head;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

