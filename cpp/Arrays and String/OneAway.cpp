#include<bits/stdc++.h>

using namespace std;

void replaceCharacter(string first,string second){
    int count=0;
    for(int i=0;i<first.length();i++){
        if(count>1){
            cout<<"False\n";
            return;
        }
        if(first[i]!=second[i])
            count++;
        
    }
    cout<<"True\n";
}


void oneAwayCharacter(string first,string second){
    int i=0,j=0,count=0;

    while(i < first.length() || j<second.length()){

        
        if(first[i] !=second[j]){

            i++;
            count++;
        }
        else{
        i++;
        j++;

        }
        if(count>1){
            cout<<"False\n";
            return;
        }
            
    }
    if(first.length()==i)
        cout<<"True\n";
    else
        cout<<"False\n";
    
}

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()==s2.length())
        replaceCharacter(s1,s2);
    else if(s1.length()>s2.length())
        oneAwayCharacter(s1,s2);
    else
        oneAwayCharacter(s2,s1);
    return 0;
}