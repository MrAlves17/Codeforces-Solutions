#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		long long int n, k;
		cin >> n >> k;

		vector<long long int> v(n);
		vector<int> posPicos;
		for(int j=0; j<n; j++){
			cin >> v[j];
		}

		for(int j=1; j<n-1; j++){
			if(v[j-1] < v[j] && v[j] > v[j+1]){
				posPicos.push_back(j);
			}
		}
		long long int picos;
		long long int maior = -1, maiorl=0;
		for(int l=1; l<=n-k+1; l++){
			picos = upper_bound(posPicos.begin(),posPicos.end(), l+k-3) - upper_bound(posPicos.begin(),posPicos.end(), l-1);		
			if(picos > maior){
				maior = picos;
				maiorl = l;
			}
		}

		cout << maior+1 << " " << maiorl << endl;
	}
}