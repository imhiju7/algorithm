#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,r;
	for(cin>>t;t--;)
	{
		cin>>a>>b>>c>>r;
		if(a>b)swap(a,b);
		cout<<b-a-max(min(b,c+r)-max(a,c-r),0)<<endl;
	}
	return 0;
}
//1282A