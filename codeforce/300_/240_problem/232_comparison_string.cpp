#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,n;
	
	string s;
	cin>>n;
	while(cin>>n>>s)
	{
		a=b=c=1;
		for(int i=1;i<n;i++)
		{
			if(s[i-1]==s[i])c++;
			else c=1;
			a=max(c,a);
		}
		
		cout<<a+1<<endl;
	}
}
//1837B