#include<bits/stdc++.h>
using namespace std;
int sodau(int n){
	int dem=1;
	int temp=n;
	while(n!=0)
	{
		n/=10;
		dem*=10;
		
	}
	dem/=10;
	int kq=temp/dem;
	return kq;
}
main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		int socuoi=n%10;
		
		if(sodau(n)==socuoi) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
