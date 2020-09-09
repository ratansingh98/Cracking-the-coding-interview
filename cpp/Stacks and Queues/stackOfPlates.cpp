#include<bits/stdc++.h>

using namespace std;

#define MAX 5 

class Stack { 
	int top1,top2; 

public: 
	int a[MAX]; // Maximum size of Stack 
	int b[MAX]; // Maximum size of Stack 

	Stack() { top1 = -1; top2 = -1; } 
	bool push(int x); 
	int pop(); 
	int peek(); 
	bool isEmpty(); 
}; 

bool Stack::push(int x) 
{ 
	if (top1 >= (MAX - 1)) { 
		if(top2 <(MAX-1)){
			b[++top2] = x; 
			cout << x << " pushed into second stack\n"; 
			return true; 
		}
		else{

			cout << "Stack Overflow\n"; 
			return false; 
		}
	} 
	else { 
		a[++top1] = x; 
		cout << x << " pushed into first stack\n"; 
		return true; 
	} 
} 

int Stack::pop() 
{ 
	if(top2<0){
		if (top1 < 0) { 
			cout << "Stack Underflow\n"; 
			return 0; 
		} 
		else { 
			int x = a[top1--]; 
			return x; 
		} 
	}
	else{
		int x = b[top2--]; 
			return x;
	}
} 
int Stack::peek() 
{ 
	if (top1 < 0) { 
		cout << "Stack is Empty\n"; 
		return 0; 
	} 
	else { 
		int x = a[top1]; 
		return x; 
	} 
} 

bool Stack::isEmpty() 
{ 
	return (top1 < 0); 
} 


int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    class Stack s; 
	s.push(10); 
	s.push(20); 
	s.push(30); 
	s.push(40);
	s.push(50);

	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	s.push(100);
	s.push(110);

	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
	cout << s.pop() << " Popped from stack\n"; 
    return 0;
}