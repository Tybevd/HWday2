#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		if(sum(n)%10==0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
