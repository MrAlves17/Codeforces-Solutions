#include <bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define ull unsigned long long int
#define FAST_I 	ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

int main(){
	FAST_I;

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> s(n);
		for(int i=0; i<n; i++){
			cin >> s[i];
		}

		sort(s.begin(),s.end());

		int min=INT_MAX;
		for(int i=0; i<n-1; i++){
			if(abs(s[i]-s[i+1]) < min){
				min = abs(s[i]-s[i+1]);
			}
		}
		
		cout << min << endl;
	}

}