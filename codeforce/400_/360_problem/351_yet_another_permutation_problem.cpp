#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while(t--){
   cin >> n;
   for(int i=1;i<=n;i+=2)
    for(int j=i;j<=n;j=j+j)
      cout <<j<<endl;
  }
}
//1858C