#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int n,d;
	n = 6-max(a,b)+1;
	d = 6;

	if(n%2==0 && d%2==0){
		n /= 2;
		d /= 2;
	}
	if(n%3==0 && d%3==0){
		n /= 3;
		d /= 3;
	}

	cout << n << "/" << d << endl;
}