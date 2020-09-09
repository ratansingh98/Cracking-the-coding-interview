#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}
int count(){
    int count =0;
    struct Node* temp = (struct Node*)malloc(sizeof(struct  Node));
    temp = head;
    while(temp->next !=NULL){
        count++;
        temp = temp->next;
        
    }
    return count;
}

int KthElement(int index){
    int count =1;
    struct Node* temp = (struct Node*)malloc(sizeof(struct  Node));
    temp = head;
    if(0==index)
        return head->data;
    else
    while(temp->next !=NULL){
        
        temp = temp->next;
        if(count ==index) break;
        count++;
    }
    return temp->data;

}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    insert(8);
    cout<<"The linked list is: \n";
    display();

    int index =0;
    if(count()>=index)
        cout<<KthElement(index)<<"\n";
    else
        cout<<"Index Out of Range\n";    
        

    
    
    return 0;
}