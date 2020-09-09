#include<iostream>
#include<stack>

using namespace std;

class myStack{  
    public: stack<int> s1,s2;

    void add(int val){
        s1.push(val);

    }
    void display(){
        while(!s1.empty()) {
            cout << s1.top()<<" ";
            s1.pop();
        }
        cout<<'\n';
    }
    void sort(){
        while(!s1.empty()){
            int temp = s1.top();
            s1.pop();
            while(!s2.empty() and s2.top()>temp){
                s1.push(s2.top());
                s2.pop();
            }
            s2.push(temp);
        }
        
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
};
int main(){
    myStack s;
    s.add(5);
    s.add(2);
    s.add(3);
    s.add(4);
    s.add(1);
    s.sort();
    s.display();
    return 0;
}
