#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; 
	cin >> n;
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++) cout<<((i+j)%2==0?'B':'W');
		cout << '\n';	
	}
    return 0;
}
//1221B