#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt[2]={0,0},ans=0;
		for(char c:s)++cnt[c-'0'];
		for(char c:s)if(!cnt[(c-'0')^1]--)cout<<s.size()-ans<<"\n";
		else ++ans;
		if(ans==s.size())cout<<0<<"\n";
	}
	return 0;
}
//1913B