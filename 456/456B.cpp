#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;

	unsigned ll int n = s.size();	
	if(n==1 && s[0]=='0'){
		cout << 4 << endl;
	}
	else{
		int num=0, pot10=1;
		for(int i=0;i<2 && i<s.size(); i++){
			num += pot10*((int)s[n-1-i]-(int)'0');
			pot10 *= 10;
		}
		if(num%4==1 || num%4==2 || num%4==3){
			cout << 0 << endl;
		}
		else if(num%4==0){
			cout << 4 << endl;
		}
	}

}

/*

	1:  1,  1,  1,  1	%4 (are u kidding me?)
	2:  2,  4,  8,  6   %4
	3:  3,  9,  7,  1   %4
	4:  4,  6,  4,  6 	%4
	s: 10, 20, 20, 14
*/