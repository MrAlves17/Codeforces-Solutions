#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define ull unsigned long long int
#define FAST_I 	ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main(){
	FAST_I;

	int t;
	cin >> t;

	while(t--){
		int a,b;
		cin >> a >> b;
		cout << max(2*min(a,b),max(a,b))*max(2*min(a,b),max(a,b)) << endl;
	}

}
