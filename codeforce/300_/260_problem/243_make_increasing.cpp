#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i!=0;i--){
			if(a[i]==0){ans=-1;break;}
			while(a[i-1]>=a[i]) a[i-1]/=2,ans++;
		}
		cout<<ans<<endl;
	}
}
//1675B