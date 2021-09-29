#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a==0){return b;}
	if(b==0){return a;}
	if(a==b){return a;}
	if(a>b){return gcd(a-b,b);}
	return gcd(a,b-a);
}

void func(int L,int R){
	int Hsum,k,count=0,a[10];
	for(int j=L;j<R+1;j++){
		Hsum=0;
		k=j;
		while(k!=0){
			Hsum+=k%16;
			k=k/16;
		}
		if(gcd(j,Hsum)>1){
			count+=1;
		}
	}
	cout<<count<<endl;
}

int main() {
	int T,L,R;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>L>>R;
		func(L,R);
	}
}
