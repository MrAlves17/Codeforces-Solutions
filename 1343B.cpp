#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int n;
	for(int i=0; i<t; i++){
		cin >> n;

		if((n/2)%2!=0){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			long long int sum = 0;
			for(int j=1; j<=n/2; j++){
				cout << j*2 << " ";
				sum += j*2;
			}
			long long int sum2 = 0;
			int j;
			for(j=1; j<n/2; j++){
				cout << j*2-1 << " ";
				sum2 += j*2-1;
			}

			while(sum2 + j*2-1 != sum){
				j++;
			}

			cout << j*2-1 << endl;
		}
	}
}