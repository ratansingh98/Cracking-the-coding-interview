#include<iostream>
#include<stack>

using namespace std;

class MyStack{
        public:
            stack<int> stackNew,stackOld;

        public: int size(){
            return stackNew.size()+stackOld.size();
        }

        public: void add(int value){
            stackNew.push(value);

        }      

        public:void shiftStacks(){
            if(stackOld.empty()){
                int l = stackNew.size();
                int count=0;
                while(!stackNew.empty()){
                    if(count==l-1){
                        stackNew.pop();
                        count++;    
                        continue;
                    }
                    int temp = stackNew.top();
                    stackOld.push(temp);
                    stackNew.pop();
                    count++;
                }
            }
        }

        public:int peek(){
            shiftStacks();
            return stackOld.top();
        }

        public:int remove(){
            
            shiftStacks();
            return stackOld.top();
        }

        public:void display(){
            while(!stackOld.empty()) {
                cout << stackOld.top()<<" ";
                stackOld.pop();
            }
            cout<<'\n';
        }
};


int main(){
    MyStack s;
    
    s.add(1);
    s.add(5);
    s.add(3);
    s.add(6);
    s.add(7);
    cout<<s.remove()<<'\n';
    s.display();
    return 0;
}