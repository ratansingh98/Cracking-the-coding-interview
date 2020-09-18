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


bool isBST(Node *tree){
    if(tree!=NULL){

        if(tree->left !=NULL)
            if(tree->left->data >tree->data)
                return false;

        if(tree->right !=NULL)
            if(tree->right->data < tree->data)
                return false;
        
        return isBST(tree->left) and isBST(tree->right);
    }
    return true;
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7,8}; //BST
    //int array[] = {1, 8, 3, 4, 5, 6, 7}; //Non BST
    int start=0;
    int end =  sizeof(array)/sizeof(array[0])-1;
    Node *tree =createBinaryTree(array,start, end);
    if(isBST(tree))
        cout<<"It is BST\n";
    else
        cout<<"It is Non BST\n";
    return 0;
}