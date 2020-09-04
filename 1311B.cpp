#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n,m;
		cin >> n >> m;

		vector<int> a(n),p(n);
		for(int j=0; j<n; j++){
			cin >> a[j];
		}

		for(int j=0; j<m; j++){
			int pos;
			cin >> pos;
			p[pos-1] = 1;
		}

		bool ok=true;
		while(ok){
			ok=false;

			for(int j=0; j<n-1; j++){
				if(p[j] && a[j]>a[j+1]){
					ok = true;
					swap(a[j],a[j+1]);
				}
			}
		}

		int j=0;
		while(a[j] <= a[j+1] && j<n-1) j++;

		if(j==n-1) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
}