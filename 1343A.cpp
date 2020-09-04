#include <bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int n;

	for(int i=0; i<t; i++){
		cin >> n;

		long long int sum=3;
		long long int j=2;
		while(sum<=n && n%sum!=0){
			sum += pow(2,j);
			j++;
		}

		cout << n/sum << endl;
	}
}