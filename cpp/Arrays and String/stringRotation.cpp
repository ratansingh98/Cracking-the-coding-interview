#include<bits/stdc++.h>

using namespace std;

bool isSubstring(string s1,string s2){
	if ( s1.find(s2) != std::string::npos ) {
		return true;
	} else {
		return false;
	}
}

bool isRotation(string s1,string s2){

    if(s1.length()==s2.length() && s1.length()>0){
        string s1s1=s1+s1;
        return isSubstring(s1s1,s2);
    }
    return false;
}

int main(){    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    string s1,s2;
    cin>>s1>>s2;
    if(isRotation(s1,s2))
        cout<<"True\n";
    else 
        cout<<"False\n";
    return 0;
}