#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,k,i,j,c,r,p[179],s[179];
int main(){
	for(cin>>n>>m>>k,i=1;i<=n;i++)cin>>p[i];
	for(i=1;i<=n;i++)cin>>s[i];
	for(;k--;)for(cin>>c,j=1;j<=n;j++)if(p[j]>p[c]&&s[j]==s[c]){++r;break;}
	cout<<r;
}
//1121A