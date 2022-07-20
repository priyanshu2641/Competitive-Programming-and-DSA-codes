#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *h = new Node(10);
    h->next = new Node(20);
    h->next->next = new Node(30);
    h->next->next->next = new Node(40);

    printList(h);

    return 0;
}