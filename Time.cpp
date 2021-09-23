#include<iostream>
#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    map<int,string> one ={{1,"one",},{2,"two",},{3,"three",},{4,"four",},{5,"five",},{6,"six",},{7,"seven",},{8,"eight",},{9,"nine",},
    {10,"ten",},{11,"eleven",},{12,"twelve",},{13,"thirteen",},{14,"fourteen",},{15,"quarter",},{16,"sixteen",},{17,"seventeen",},
    {18,"eighteen",},{19,"nineteen",},{20,"twenty",}};
    
    map<int,string>::iterator hr;
    map<int,string>::iterator min;
    if(m==00){
        hr = one.find(h);
        return(hr->second+" o' clock");
    }
    if(m<30){
        hr = one.find(h);
        if(m==15){
            return("quarter past "+hr->second);
        }
        if(m<=20){
            min = one.find(m);
            if(m==1){
                return(min->second+" minute past "+hr->second);
            }
            return(min->second+" minutes past "+hr->second);}
        else{
            int M = m%10;
            min = one.find(M);
            return("twenty "+min->second+" minutes past "+hr->second);
        }
    }
    else if(m>30){
        hr = one.find(h+1);
        if(m==45){
            return("quarter to "+hr->second);
        }
        int M = 60-m;
        if(M<=20){
            min = one.find(M);
            if(M==1){
                return("one minute to "+hr->second);
            }
            return (min->second+" minutes to "+hr->second);}
        else{
            int M1 = M%10;
            min = one.find(M1);
            return("twenty "+min->second+" minutes to "+hr->second);            
        }
    }
    else{
        hr = one.find(h);
        return("half past "+hr->second);
    }
}

int main(){
        int h,m;
        cin>>h;
        cin>>m;
        cout<<timeInWords(h, m);
        return(0);
 }
        
