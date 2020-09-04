#include <bits/stdc++.h>

using namespace std;

int main(){
	int k2,k3,k5,k6;
	cin >> k2 >> k3 >> k5 >> k6;

	int n256 = min(k2,min(k5,k6));
	k2 -= n256;
	int n32 = min(k2,k3);

	cout << n256*256+n32*32 << endl;
}