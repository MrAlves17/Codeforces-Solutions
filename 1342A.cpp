#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		ll int x,y;
		cin >> x >> y;

		ll int a,b;
		cin >> a >> b;

		cout << abs(x-y)*a + min(min(x,y)*b, 2*abs(min(x,y))*a) << endl;
	}
}