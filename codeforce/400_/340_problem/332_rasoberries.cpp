#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int r=0,r4=0;
		while(n--){
			int x;cin>>x;
			if(k==4)r4+=x%2==0 and r4<2?1:0;
			r=x%k==0?k:max(r,x%k);
		}
		cout<<(k==4?2-r4<k-r?2-r4:k-r:k-r)<<endl;
	}
}
//1883C