#include <iostream>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		lli n,k;
		cin >> n >> k;

		if(n%2==0){
			n = n+2*k;
		}
		else{
			int i;

			for(int j=3; j<=n; j+=2){
				if(n%j==0){
					n += j;
					break;
				}
			}
			n = n+(k-1)*2;
		}

		cout << n << endl;
	}

}