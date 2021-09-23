#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string encryption(string s) {
    remove(s.begin(),s.end(),' ');
    int c=ceil(sqrt(s.size())), f=floor(sqrt(s.size()));
    int i=0,j;
    string S;
    while(i<c){
        j=i;
        while(j<s.size()){
            S.push_back(s[j]);
            j=j+c;
        }
        S.push_back(' ');
        i+=1;
    }
    return(S);
}

int main(){
    string s;
    cin>>s;
    cout<<encryption(s);
    return(0);
}
