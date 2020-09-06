#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define endl "\n"
#define FAST_I ios_base::sync_with_stdio(false); cin.tie(0)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define SQ(a) a*a

using namespace std;

int main(){
	FAST_I;

	int t;
	cin >> t;
	while(t--){
		ll n,x,y;
		cin >> n >> x >> y;
		ll dif = y-x;
		for(ll i=dif/n+1; i<=dif; i++){
			if(dif%i==0){
				vector<ll> ans(n);
				for(ll j=0; j<n; j++){
					ans[j] = x+i*j;
				}

				ll k;
				if((ans[n-1]-y)/i < ceil(ans[0]/i)){
					k = (ans[n-1]-y)/i;
				}else{
					k = max(0.0,ceil(1.0*ans[0]/i-1));
				}

				for(ll j=0; j<n; j++){
					cout << ans[j]-k*i << " ";
				}
				cout << endl;
				break;
			}
		}
	}

	return 0;
}