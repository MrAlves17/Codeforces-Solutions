#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define ull unsigned long long
#define FAST_I 	ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main(){
	FAST_I;

	int t;
	cin >> t;

	while(t--){
		ll n,k;
		cin >> n >> k;

		ll m = LLONG_MAX;
		for(ll div=1; div<=sqrt(n); div++){
			if(n%div==0){
				if (div <= k) m = min(m, n / div);
				if (n / div <= k) m = min(m, div);
			}
		}

		cout << m << endl;
	}

}