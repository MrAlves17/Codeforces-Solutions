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
		ll a,b;
		cin >> a >> b;
		ll ans = abs(a-b)/10;
		if(abs(a-b)%10>0){
			ans++;
		}
		cout << ans << endl;
	}

	return 0;
}