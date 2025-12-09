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


//This is the optimal since no extra space is used
Node* reverse(Node*head){
    Node*temp=head;
    Node*prev=NULL;
    
    while(temp!=NULL){
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

int main(){
    vector<int> input={1, 2, 3, 4, 5 };
    Node* head=createLinkedlist(input);
    head=reverse(head);
    print(head);
    
}
