#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<ll int > v(n),psum(n+1),psum2(n+1);

	psum2[0] = psum[0] = 0;

	for(int i=0; i<n; i++){
		cin >> v[i];
		psum[i+1] = psum[i] + v[i];
	}

	sort(v.begin(),v.end());

	for(int i=0; i<n; i++){
		psum2[i+1] = psum2[i] + v[i];
	}

	int m;
	cin >> m;

	for(int i=0; i<m; i++){
		int type,l,r;
		cin >> type >> l >> r;

		if(type==1){
			cout << psum[r]-psum[l-1] << endl;
		}
		else{
			cout << psum2[r]-psum2[l-1] << endl;
		}
	}
}
