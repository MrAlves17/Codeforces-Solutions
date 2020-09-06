#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k,r;
	cin >> k >> r;
	int i;
	for( i=1; i<10; i++){
		if((i*k)%10 == 0 || (i*k)%10 == r){
			cout << i << endl;
			break;
		}
	}

	if(i==10){
		cout << 1 << endl;
	}
}