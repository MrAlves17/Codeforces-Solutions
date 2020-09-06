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
		ll a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;

		if(a-min(n,a-x) <= b-min(n,b-y)){
			cout << max(a-n,x)*max(y,(b-max(0LL,n-(a-x)))) << endl;
		}else{
			cout << max(b-n,y)*max(x,(a-max(0LL,n-(b-y)))) << endl;
		}
	}

	return 0;
}