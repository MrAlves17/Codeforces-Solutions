#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
	ll n,m,a;
	cin >> n >> m >> a;
	ll b,c;
	if(1.0*n/a > n/a){
		b = n/a+1;
	}
	else{
		b = n/a;
	}
	if(1.0*m/a > m/a){
		c = m/a+1;
	}
	else{
		c = m/a;
	}
	cout << b*c << endl;
}