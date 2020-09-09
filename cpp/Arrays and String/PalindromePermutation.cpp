#include<bits/stdc++.h>

using namespace std;

string remove_space(string s){
    int i=0,j=0;
    while(s[i]){
        if(s[i] !=' ')
            s[j++]=s[i];
        i++;
    }
    s[j] ='\0';

    return s;
}

bool checkPalindrome(string s){
int counter[128],j;
    for(int i=0;i<128;i++)
        counter[i]=0;
    for(int i=0;i<s.length();i++){
        counter[(int)s[i]]++;
    }

    for(int i=0;i<128;i++){
        if(counter[i] ==1)
            j++;

        if(j>1) return false;
    }
    return true;
}

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s;
    getline(cin,s);
    s = remove_space(s);
    
    if(checkPalindrome(s)) cout<<"True\n";

    else cout<<"False\n";

    return 0;
}