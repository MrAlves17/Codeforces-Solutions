#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;

	for(int i=0; i<T; i++){
		string t;
		cin >> t;

		int count0 = 0, count1 = 0;
		for(int j=0; j<t.size(); j++){
			if(t[j] == '0'){
				count0++;
			}
			else{
				count1++;
			}
		}

		if(count0 == 0 || count1 == 0){
			// k=1
			cout << t << endl;
		}
		else{
			// k=2
			for(int j=1; j<t.size(); j++){
				if(t[j-1] == t[j] && t[j] == '0'){
					t.insert(j,"1");
					j++;
				}
				else if(t[j-1] == t[j] && t[j] == '1'){
					t.insert(j,"0");
					j++;
				}
			}

			cout << t << endl;
		}
	}

}

/*
	k=2 |s| = 8
	s1 = s3 = s5 = s7
	s2 = s4 = s6 = s8
	
	1110

	0101010101
*/