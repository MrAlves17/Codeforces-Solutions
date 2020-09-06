#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;

	cin >> n;

	int a;
	int officers=0;
	int untreated=0;
	for(int i=0; i<n; i++){
		cin >> a;

		if(a==-1 && officers==0){
			untreated++;
		}
		else if(a==-1 && officers>0){
			officers--;
		}
		else{
			officers += a;
		}
	}

	cout << untreated << endl;
}