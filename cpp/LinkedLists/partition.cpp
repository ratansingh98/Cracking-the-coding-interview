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

int count(){
    int count =1;
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
void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

void deleteMiddleNode(){
    int total_elements = count();
    if(total_elements<=2)
        return;
    int middle = total_elements/2;
    struct Node * current = (struct Node*)malloc(sizeof(struct Node));
    current = head;
    int count =1;
    struct Node* head1 = NULL;

    while(current != NULL){
        if(count!=middle){

            struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
            new_node->data = current->data;
            new_node->next = head1;
            head1 = new_node;

        }
        current = current->next;
        count++;
    }
    head = head1;
}
void partition(int part){
    struct Node * current = (struct Node*)malloc(sizeof(struct Node));
    current = head;

    struct Node* small_head = NULL;
    struct Node* large_head = NULL;

    while(current != NULL){

        if(current->data <part){

            struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
            new_node->data = current->data;
            new_node->next = small_head;
            small_head = new_node;

        }
        else{
            struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
            new_node->data = current->data;
            new_node->next = large_head;
            large_head = new_node;


        }
        current = current->next;
    }

    struct Node * current1 = (struct Node*)malloc(sizeof(struct Node));
    current1 = large_head;
    struct Node* final_head = small_head;

    while(current1 != NULL){
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = current1->data;
        new_node->next = final_head;
        final_head = new_node;

        current1 = current1->next;
    }

    head = final_head;

}

void reverse(){

    struct Node * current = (struct Node*)malloc(sizeof(struct Node));
    current = head;
    struct Node* final_head = NULL;

    while(current != NULL){
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = current->data;
        new_node->next = final_head;
        final_head = new_node;

        current = current->next;
    }

    head = final_head;

}

int main() {
    insert(3);
    insert(5);
    insert(8);
    insert(5);
    insert(10);
    insert(2);
    insert(1);
    cout<<"The linked list is: ";
    display();

    int n=5;
    partition(n);
    reverse();
    cout<<"The linked list is: ";
    display();
    return 0;
}