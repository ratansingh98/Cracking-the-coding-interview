#include<bits/stdc++.h>

using namespace std;

void stringCompression(string s){
    int counter=1;
    for(int i=0;i<s.length();i++){
        if(s[i] == s[i+1])
            counter++;
        else if(i ==s.length()-1){
            cout<<s[i]<<counter;
        }
        else
        {
            cout<<s[i]<<counter;
            counter =1;
        }
        
    }

}

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s;
    cin>>s;
    stringCompression(s);
    return 0;
}