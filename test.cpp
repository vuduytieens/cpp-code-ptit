#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++) if(n%i==0) return 0;
	return 1;
}
int sum(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n; int r=n;
			int sumcsuoc=0;
			int sumcs=sum(n);
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				while(n%i==0){
					sumcsuoc+=sum(i);
					n/=i;
				}
			}
		} if(n>1) sumcsuoc+=sum(n);
			if(sumcs==sumcsuoc && !nt(r)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
	}
}