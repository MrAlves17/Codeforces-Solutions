#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;

		vector<pair<int,int>> v(n);
		for(int i=0; i<n; i++){
			v[i] = make_pair(0,0);
		}
		int a;
		int smallest=n;
		bool repeated = false;
		for(int i=0; i<n; i++){
			cin >> a;a--;
			if(v[a].first == 0){
				v[a].first = 1;
				v[a].second = i;
			}
			else{
				repeated = true;
				if(i-v[a].second+1 < smallest){
					smallest = i-v[a].second+1;
				}
				v[a].second = i;
			}
		}
		if(repeated){
			cout << smallest << endl;
		}
		else{
			cout << -1 << endl;
		}

	}
	

}