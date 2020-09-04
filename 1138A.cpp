#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> sushi(n), compacted(n);
	for(int i=0; i<n; i++){
		cin >> sushi[i];
		compacted[i] = 1;
	}

	int j=0;

	for(int i=1; i<n; i++){
		if(sushi[i] == sushi[i-1]) compacted[j]++;
		else j++;
	}

	int biggestLength=0;
	for(int i=1; i<=j; i++){
		biggestLength = max(biggestLength,min(compacted[i],compacted[i-1]));
	}

	cout << biggestLength*2 << endl;
}