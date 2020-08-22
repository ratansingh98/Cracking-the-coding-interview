#include<bits/stdc++.h>

using namespace std;


int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s;
    cin>>s;
    int counter=0;
    for(int i=0;i<s.length();i++){
        int temp = s[i]-'a';
        //Each bit of counter will store character count
        if((counter&1<<temp)>0){
            cout<<"Not Unique\n";
            break;
        }
        counter |=1<<temp;
    }
    if(counter&1)
        cout<<"Unique\n";
    return 0;
}