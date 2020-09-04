#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		lli n;
		cin >> n;

		vector<lli> numPyramids;

		lli h=1;
		while(3.0/2*h*h + 1.0/2*h <= n){
			numPyramids.push_back(3.0/2*h*h + 1.0/2*h);
			h++;
		}
		numPyramids.push_back(3.0/2*h*h + 1.0/2*h);
		lli count=0;
		while(n>=2){
			for(int i=0; i<numPyramids.size(); i++){
				if(numPyramids[i]>n){
					count++;
					n-=numPyramids[i-1];
					break;
				}
			}
		}

		cout << count << endl;

	}

}