#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node* head1 = NULL;
struct Node* head2 = NULL;
struct Node* result_head = NULL;

void insert1(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head1;
    head1 = new_node;
}

void insert2(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head2;
    head2 = new_node;
}

void display1() {
    struct Node* ptr;
    ptr = head1;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

void display2() {
    struct Node* ptr;
    ptr = head2;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}


void display3() {
    struct Node* ptr;
    ptr = result_head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}



void sumlist(){

    struct Node * current1 = (struct Node*)malloc(sizeof(struct Node));
    current1 = head1;

    struct Node * current2 = (struct Node*)malloc(sizeof(struct Node));
    current2 = head2;
    struct Node* final_head = NULL;

    int carry= 0,temp,new_data,data1,data2;
    while(1){
        if (current1 == NULL && current2==NULL)  
            break;

        if(current1 !=NULL)
            data1 = current1->data;
        else
            data1 = 0;

        if(current2 !=NULL)
            data2 = current2->data;
        else
            data2 = 0;

        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    
        temp= data2+data1+carry;
        if(temp-10>=0){
            carry =0;
            new_data = temp-10;
            carry++;
        }
        else{
            new_data = temp;
            carry =0;
        }
        new_node->data = new_data;
        new_node->next = result_head;
        result_head = new_node;
        
        if(current2 !=NULL)
            current2 = current2->next;
        if(current1 !=NULL)
            current1 = current1->next;
    }
    cout<<"\n";

}

int main() {
    insert1(4);
    insert1(3);
    insert1(2);
    insert1(1);
    cout<<"The linked list is: ";
    display1();
    

    insert2(5);
    insert2(6);
    insert2(7);
    cout<<"The linked list is: ";
    display2();

    sumlist();
    display3();
    return 0;
}