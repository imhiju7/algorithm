#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> a(n),cnt(n+3,0);
		for(int i=0; i<n; i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		int c=0;
		for(int i=0; i<=n; i++){
			c+=(cnt[i]==1);
			if(c==2 || (cnt[i]==0)){
				cout<<i<<'\n';
				break;
			}
		}
	}
}

//1943A