#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int n;
	cin >> n;
	ll int a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll int joy=0;
	for(int i=0; i<n; i++){
		cin >> b[i];
		if(2*a[i] >= b[i] && b[i] >= 2){
			ll int x = b[i]/2, y = b[i]-x;
			joy += x*y;
		}
		else{
			joy--;
		}
	}
	cout << joy << endl;



}