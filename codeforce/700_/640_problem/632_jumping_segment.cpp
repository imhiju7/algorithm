#include<bits/stdc++.h>
#define N 200005
using namespace std;
int a[N],b[N];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
		int l=0,r=1e9;
		while(l<=r){
			int mid=l+r>>1;
			int u=0,v=0,flag=0;
			for(int i=1;i<=n;i++){
				u=max(a[i],u-mid);
				v=min(b[i],v+mid);
				if(u>v) flag=1;
			}
			if(flag==0) r=mid-1;
			else l=mid+1;
		}
		cout<<l<<endl;
	}
}
//1907D