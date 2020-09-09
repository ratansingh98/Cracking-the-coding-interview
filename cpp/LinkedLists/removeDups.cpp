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
}

void remove_dups(){
    struct Node* current;
    current = head;
    while(current !=NULL){
        struct Node* runner =current;
        while(runner->next != NULL){
            if(runner->next->data == current->data)
                runner->next = runner->next->next;
            else
                runner = runner->next;
        }
        current = current->next;

    }

}


int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(1);
    insert(9);
    cout<<"The linked list is:\n";
    display();
    cout<<"\nAfter Removing duplication\n";
    remove_dups();
    display();
    cout<<"\n";
    
    return 0;
}