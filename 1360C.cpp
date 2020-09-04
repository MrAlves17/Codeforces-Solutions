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

		multiset<int> odd, even;
		int a;
		for(int i=0; i<n; i++){
			cin >> a;
			if(a%2==0){
				even.insert(a);
			} else {
				odd.insert(a);
			}
		}

		if(even.size()%2==0 && odd.size()%2==0){
			cout << "YES" << endl;
		} else {

			if(even.size()%2!=odd.size()%2){
				cout << "NO" << endl;
				continue;
			}
			
			bool yes=false;
			for(int x : odd){
				if(even.count(x-1) || even.count(x+1)){
					cout << "YES" << endl;
					yes=true;
					break;
				}
			}
			if(!yes) cout << "NO" << endl; 
		}
	}

}