#include<bits/stdc++.h>

using namespace std;

#define MAX 1000 

class Stack { 
	int top; 
	int top1; 

public: 
	int a[MAX]; // Maximum size of Stack 
	int minArray[MAX];

	Stack() { top = -1; top1 = -1; } 
	bool push(int x); 
	int pop(); 
	int peek(); 
	int min();
	bool isEmpty(); 
}; 

bool Stack::push(int x) 
{ 

	if(top1==-1 || min()>x){
		minArray[++top1] = x; 
		cout << x << " pushed into Min stack\n"; 
	}


	if (top >= (MAX - 1)) { 
		cout << "Stack Overflow"; 
		return false; 
	} 
	else { 
		a[++top] = x; 
		cout << x << " pushed into stack\n"; 
		return true; 
	} 

} 

int Stack::pop() 
{ 
	if (top < 0) { 
		cout << "Stack Underflow"; 
		return 0; 
	} 
	else { 
		if(a[top]==min())
			top1--;
		int x = a[top--]; 
		return x; 
	} 
} 
int Stack::peek() 
{ 
	if (top < 0) { 
		cout << "Stack is Empty"; 
		return 0; 
	} 
	else { 
		int x = a[top]; 
		return x; 
	} 
} 

bool Stack::isEmpty() 
{ 
	return (top < 0); 
} 

int Stack::min() 
{ 
	if(top1==-1)
		cout<<"Min stack is empty\n";
	return minArray[top1];
} 

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    class Stack s; 
	s.push(30); 
	s.push(20); 
	s.push(10); 
	cout << s.pop() << " Popped from stack\n"; 
	cout<<s.min()<<"\n";
	s.push(10); 

    return 0;
}