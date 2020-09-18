#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node *createBinaryTree(int array[],int start, int end){
    if(end<start)
        return NULL;

    int mid = (start+end)/2;
    Node *n = new Node(array[mid]);
    n->left = createBinaryTree(array,start,mid-1);
    n->right = createBinaryTree(array,mid+1,end);
    return n;
}


void display(Node *tree){
    if(tree!=NULL){
        if((tree->left ==NULL and tree->right !=NULL) or (tree->right ==NULL and tree->left !=NULL))
            cout<<"Unbalanced\n";
        display(tree->left);
        display(tree->right);
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7,8}; //UnBalanced
    //int array[] = {1, 2, 3, 4, 5, 6, 7}; //Balanced
    int start=0;
    int end =  sizeof(array)/sizeof(array[0])-1;
    Node *tree =createBinaryTree(array,start, end);
    display(tree);
    return 0;
}