#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int t,n,a[N];

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long ans=0,res=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=n;i>=1;i--) res+=a[i],ans+=max(res,0ll);
		if(res<0) ans+=res;
		cout<<ans<<endl;
	}
	return 0;
}
//1903C