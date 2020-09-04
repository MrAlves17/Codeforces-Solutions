#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

bool isSorted(vector<int> &v, int b, int e){
	for(int i=b; i<e-1; i++){
		if(v[i] > v[i+1]){
			return false;
		}
	}
	return true;
}

int thanosSort(vector<int> &v, int b, int e){
	int esq, dir;
	if(e-b < 1){
		return 0;
	}
	else if(!isSorted(v, b, e)){
		return max(thanosSort(v, b, (e+b)/2), thanosSort(v, (e+b)/2, e));
	}
	else{
		return e-b;
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	if(isSorted(v, 0, n)){
		cout << v.size() << endl;
	}
	else{
		cout << thanosSort(v, 0, n) << endl;
	}
}