#include <bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    struct Node* left;
    struct Node* right;

    Node(int value){
        key = value;
        left=NULL;
        right=NULL;
    }
};

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return (1+ max(height(root->left),height(root->right)));
    }
}

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);
    
        //     10 
        //    /  \
        //   20  30
        //  /  \
        // 40  50
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout<<height(root)<<endl;

    return 0;

}