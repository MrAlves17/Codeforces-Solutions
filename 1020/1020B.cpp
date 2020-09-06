#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int p[n];
	for(int i=0; i<n; i++){
		cin >> p[i];
		p[i]--;
	}

	for(int i=0; i<n; i++){
		int v[n];
		for(int j=0; j<n; j++){
			v[j] = false;
		}
		int k=i;
		while(!v[k]){
			v[k] = true;
			k = p[k];
		}

		cout << k+1 << " ";
	}

	cout << endl;
}