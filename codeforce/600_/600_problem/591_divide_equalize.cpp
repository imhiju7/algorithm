#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		map<int,int> mp;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			for(int j=2;j*j<=a[i];j++){
				while(a[i]%j==0){
					a[i]/=j;
					mp[j]++;
				}
			}
			if(a[i]>1) mp[a[i]]++;
		}
		int flag=1;
		for(auto i:mp){
			if(i.second%n!=0) flag=0;
		}
		if(flag==1) printf("YES\n");
		else printf("NO\n");
	}
}
//1881D