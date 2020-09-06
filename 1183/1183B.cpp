#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int q;
	cin >> q;

	long long int n,k;
	for(int i=0; i<q; i++){
		cin >> n >> k;

		long long int maxB=LLONG_MAX, bestBi;
		long long int oldPrice[n];
		for(int j=0; j<n; j++){
			cin >> oldPrice[j];
			bestBi = oldPrice[j] + k;
			if(bestBi < maxB){
				maxB = bestBi;
			}
		}

		bool restrSatisfied = true;
		for(int j=0; j<n && restrSatisfied; j++){
			if(abs(oldPrice[j] - maxB) > k){
				restrSatisfied = false;
			}
		}

		if(restrSatisfied){
			cout << maxB << endl;
		}
		else{
			cout << -1 << endl;
		}

	}
}


/*
	p1 a1
	p2 a2
	...
	...
	...
	pn an

	|ai - bi| <= k

	ai - bi <= k && ai - bi >= -k

	ai - k <= bi && ai + k >= bi


*/