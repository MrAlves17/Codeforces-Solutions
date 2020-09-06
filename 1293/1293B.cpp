#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	double prize=0;
	while(n>0){
		prize += 1.0/n;
		n -= 1;
	}
	cout << prize << endl;
}