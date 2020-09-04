#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<ll int> d(n),psum(n+1);
	psum[0] = 0;
	for(int i=0; i<n; i++){
		cin >> d[i];
		psum[i+1] = psum[i] + d[i];
	}

	ll int bestsum=0;
	ll int sum1=psum[n], sum3=0;
	for(int i=n-1; i>=0; i--){
		sum1 -= d[i];
		sum3 += d[i];
		bool found = binary_search(psum.begin(),psum.end()-n+i, sum3);
		if(found){
			bestsum = max(sum3,bestsum);
		}
		if(sum1<=sum3){
			break;
		}
	}

	cout << bestsum << endl;

}