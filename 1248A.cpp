#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int n,m;
	for(int i=0; i<t; i++){
		cin >> n;

		vector<unsigned long long int> p(n);
		unsigned long long int parP=0, imparP=0;
		for(int j=0; j<n; j++){
			cin >> p[j];
			if(p[j]%2==0){
				parP++;
			} else {
				imparP++;
			}
		}

		cin >> m;

		vector<unsigned long long int> q(m);
		unsigned long long int parQ=0, imparQ=0;
		for(int j=0; j<m; j++){
			cin >> q[j];
			if(q[j]%2==0){
				parQ++;
			} else {
				imparQ++;
			}
		}

		unsigned long long int intercecoes=0;
		intercecoes = parP*parQ + imparP*imparQ;
		cout << intercecoes << endl;
	}
	
}