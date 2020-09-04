#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int s,x,c,b=0;
	for(int i=0; i<t; i++){
		cin >> s;

		while(s>9){
			x = (s/10)*10;
			c = s/10;

			s -= x-c;
			b += x;
		}
		b += s;

		cout << b << endl;

		b=0;
	}
}