
#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,m,a[200005],p[200005],ans[200005],l,r,mul;
string s;
signed main()
{
	cin>>T;
	while(T--)
	{
		cin>>n>>m;for(int i=1;i<=n;i++)cin>>a[i];
		cin>>s;l=1;r=n;mul=1;for(int i=0;i<n;i++)
		if(s[i]=='L'){p[i+1]=l;l++;}else{p[i+1]=r;r--;}
		for(int i=n;i>=1;i--){mul=mul*a[p[i]]%m;ans[i]=mul;}
		for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
		cout<<"\n";
	}
}

//1932C