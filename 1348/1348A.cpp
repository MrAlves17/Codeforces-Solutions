#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		ll int sum = 0;
		for(int i=1; i<=n/2; i++){
			sum += pow(2,i);
		}

		cout << sum << endl;
	}

}