#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int q;
	cin >> q;

	int n;
	for(int i=0; i<q; i++){
		cin >> n;

		vector<int> p(n);
		vector<int> a(n);
		for(int j=0; j<n; j++){
			cin >> p[j];
			a[j] = 1;
		}

		for(int j=0; j<n; j++){
			int k=j;
			while(p[k]!=j+1){
				a[j]++;
				k = p[k]-1;
			}
		}

		for(int j=0; j<n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}

}