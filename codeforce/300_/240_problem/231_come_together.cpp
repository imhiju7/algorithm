#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int q,w,e,r,t,y;
		cin >> q >> w >> e >> r >> t >> y;
		cout << (abs(q-e)+abs(w-r)+1+abs(q-t)+abs(w-y)+1-abs(e-t)-abs(r-y))/2 << endl;
	}
	return 0;
}
//1845B