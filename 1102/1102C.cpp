#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,x,y;
	cin >> n >> x >> y;
	int count=0;
	int aux;
	for(int i=0; i<n; i++){
		cin >> aux;
		if(aux<=x){
			count++;
		}
	}

	if(x>y){
		cout << n << endl;
	}
	else{
		cout << (count+1)/2 << endl;
	}

	// priority_queue<int, vector<int>, greater<int> > a;
	// int aux;
	// for(int i=0; i<n; i++){
	// 	cin >> aux;
	// 	a.push(aux);
	// }
	// ulli turns = 0;
	// while(!a.empty()){
	// 	int door = a.top();
	// 	if(door>x && y>=x) break;
	// 	a.pop();
	// 	if(turns%2==0){
	// 		door = max(0,door-x);
	// 		if(door>0) a.push(door);
	// 	}
	// 	else{
	// 		door += y;
	// 		a.push(door);
	// 	}
	// 	turns++;
	// }

	// cout << n - a.size() << endl;

}