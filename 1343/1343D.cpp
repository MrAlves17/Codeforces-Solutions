#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int n,k;
		cin >> n >> k;

		vector<int> a(n);
		for(int j=0; j<n; j++){
			cin >> a[j];
		}
		int minRpl = n;
		for(int j=2; j<=2*k; j++){
			int replacements=0;
			for(int l=0; l<n/2; l++){
				if(a[l] + a[n-1-l] > j){
					if(min(a[l],a[n-1-l])+1 <= j){
						replacements++;
					}
					else{
						replacements+=2;
					}
				}
				else if(a[l] + a[n-1-l] < j){
					if(max(a[l],a[n-1-l])+k >= j){
						replacements++;
					}
					else{
						replacements+=2;
					}
				}
			}

			if(replacements < minRpl){
				minRpl = replacements;
			}
		}

		cout << minRpl << endl;
	}
}