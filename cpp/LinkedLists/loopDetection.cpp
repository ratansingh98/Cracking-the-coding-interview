#include <iostream>
#include <cmath>

using namespace std;

struct Node {
    int data;
    Node * next;
    Node( int d ) : data{ d }, next{ nullptr } { }
};


void printList( Node * head )
{
    while( head ) {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int listLen( Node * head )
{
    int count = 0;
    while( head ) {
        head = head->next;
        count++;
    }
    return count;
}


int intersectionPoint( Node * head1 )
{
    Node * ptr1 = head1 ;
    Node * ptr2 = head1 ;
    int res;
    while ( 1 ) {

        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if(ptr1==ptr2) break;        
        else res=ptr1->data;
        
    }

    return res;
}


int main()
{
    Node * list1 = new Node(3);
    list1->next = new Node(6);
    list1->next->next = new Node(9);
    list1->next->next->next = new Node(12);
    list1->next->next->next->next = new Node(15);
    list1->next->next->next->next->next = list1->next->next;
    
    cout<<intersectionPoint( list1 )<<"\n";
    return 0;
}