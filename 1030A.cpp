#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int response[n];
	bool hard = false;
	for(int i=0; i<n; i++){
		cin >> response[i];
		if(response[i] == 1)
			hard = true;
	}
	if(hard) cout << "HARD\n";
	else cout << "EASY\n";
}