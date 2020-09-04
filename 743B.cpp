#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll int n,k;
	cin >> n >> k;

	for(int i=0; i<n; i++){
		if((ll int)(k-pow(2,i))%(ll int)pow(2,i+1)==0){
			cout << i+1 << endl;
			break;
		}
	}
}