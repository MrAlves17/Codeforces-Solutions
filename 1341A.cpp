#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		long long int n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;

		long long int L = n*(a-b), R = n*(a+b);

		if(R >= c-d && L <= c+d){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
}