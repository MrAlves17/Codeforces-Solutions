#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	bool possible = false;
	for(int i=0; i<(1 << n) && !possible; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			if(i & (1 << j)){
				sum -= a[j];
			}
			else{
				sum += a[j];
			}
		}

		if(sum%360==0){
			cout << "YES" << endl;
			possible = true;
		}
	}

	if(!possible) cout << "NO" << endl;
}
