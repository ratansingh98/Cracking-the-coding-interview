#include<bits/stdc++.h>

using namespace std;

bool checkPermutation(string s1,string s2){
    int counter1[128];
    for(int i=0;i<128;i++)
        counter1[i]=0;
    for(int c: s1)
        counter1[c]++;

    for(int c: s2){
        counter1[c]--;
        if(counter1[c]<0)
            return false;
    }
    return true;
        
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()>s2.length()) cout<<checkPermutation(s1,s2)<<"\n";
    else cout<<checkPermutation(s2,s1)<<"\n";
    
    return 0;
}