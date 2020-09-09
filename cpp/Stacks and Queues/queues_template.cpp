#include <iostream>
using namespace std;
struct node {
    int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void Insert(int val) {
    if (rear == NULL) {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->data = val;
        front = rear;
    } else {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
void Delete() {
    temp = front;
    if (front == NULL) {
        cout<<"Underflow"<<endl;
        return;
    }
    else
    if (temp->next != NULL) {
        temp = temp->next;
        cout<<"Element deleted from queue is : "<<front->data<<endl;
        free(front);
        front = temp;
    } else {
        cout<<"Element deleted from queue is : "<<front->data<<endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}
void Display() {
    temp = front;
    if ((front == NULL) && (rear == NULL)) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements are: ";
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    Display();

    return 0;
}