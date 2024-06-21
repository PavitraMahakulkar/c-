#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    //Node* temp=head;
    //while(temp!=NULL){
        //cout<<temp->val<<" ";
        //temp=temp->next;

    //}
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        temp=temp->next;
        n++;
    }
    return n;
}
void revdisplay(Node* head){
    if(head==NULL) return;
    revdisplay(head->next); // call
    cout<<head->val<<" "; // kaam
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" "; // kaam
    displayrec(head->next); // call
    // displayrec(head->next); // call
    // cout<<head->val<<" "; // kaam
}
void insertAtEnd(Node* head, int val){
    Node* t=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=t;
}
int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    //c->next=d;
    d->next=e;
    cout<<a->next->val<<endl;
    cout<<a->next->next->val<<endl;
    // Node* temp=a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }
    //display(a);
    displayrec(a);
    cout<<endl;
    revdisplay(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    display(a);
    insertAtEnd(a,80);
    display(a);
}