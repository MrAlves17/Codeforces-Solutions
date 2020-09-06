#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);


	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;

	int count=0;
	for(int i=0; i<d; i++){
		if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0){
			count++;
		}
	}

	cout << count << endl;
}