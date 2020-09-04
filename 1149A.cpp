#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> a(n),b(n);
	int num2=0,num1=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] == 2) num2++;
		else num1++;
	}


	if(num2>0 && num1>0){
		cout << "2 1 ";
		num2--;num1--;
	}
	
	for(int i=0; i<num2; i++){
		cout << "2 ";
	}
	for(int i=0; i<num1; i++){
		cout << "1 ";
	}
	cout << endl;

	

}