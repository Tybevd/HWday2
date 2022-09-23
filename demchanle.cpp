#include<bits/stdc++.h>
using namespace std;
void solve(int n){
	int demle=0,demchan=0;
	while(n!=0){
		int temp=n%10;
		n/=10;
		if(temp%2==0) demchan++;
		else demle++;
	}
	cout<<demle<<" "<<demchan;
}
main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		solve(n);
	}
}
