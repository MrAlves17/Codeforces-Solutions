#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,l,r;
	cin >> n >> l >> r;

	vector<int> possibleNumbers;
	for(int i=0; i<r; i++){
		possibleNumbers.push_back(pow(2,i));
	}

	int minSum=0;
	for(int i=0; i<n-l+1; i++){
		minSum += possibleNumbers[0];
	}
	for(int i=0; i<l-1; i++){
		minSum += possibleNumbers[i+1];
	}


	int maxSum=0;
	for(int i=0; i<r-1; i++){
		maxSum += possibleNumbers[i];
	}
	for(int i=0; i<n-r+1; i++){
		maxSum += possibleNumbers[r-1];
	}

	cout << minSum << " " << maxSum << endl;

}
