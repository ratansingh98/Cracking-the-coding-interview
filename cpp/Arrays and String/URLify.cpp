#include<bits/stdc++.h>

using namespace std;


int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    string s,res="";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
    if(s[i]==' ') {
        res.push_back('%');
        res.push_back('2');
        res.push_back('0');
    }
    else res.push_back(s[i]);
    }
        

    cout<<res<<"\n";
    return 0;
}