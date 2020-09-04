#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, v;
	scanf("%d%d",&n,&v);

	int tank=0, money=0;
	for(int city=1;city<=n; city++, tank--){
		if(tank<v && tank<n-city){
			int gas = min(v-tank,n-city);
			tank += gas;
			money += gas*city;
		}
		else if(tank==n-city){
			break;
		}
	}

	cout << money << endl;
}