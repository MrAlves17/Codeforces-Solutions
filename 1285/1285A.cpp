#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string commands;
	cin >> commands;
	int maxleft=0, maxright=0;
	for(int i=0; i<n; i++){
		if(commands[i] == 'L') maxleft++;
		if(commands[i] == 'R') maxright++;
	}

	cout << maxright+maxleft+1 << endl;
}