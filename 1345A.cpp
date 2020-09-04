#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n,m;
		cin >> n >> m;
		if(n==2 && m==2 || n==1 || m==1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}