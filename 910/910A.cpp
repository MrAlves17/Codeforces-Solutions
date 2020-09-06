#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,d;
	cin >> n >> d;

	string s;
	cin >> s;

	int jumps=0;
	int pos=0;
	while(pos!=n-1){
		int bestLilyFlower = pos;
		for(int i=pos+1; i-pos<=d && i<n; i++){
			if(s[i]=='1'){
				bestLilyFlower = i;
			}
		}
		if(bestLilyFlower == pos){
			jumps = -1;
			break;
		}
		pos = bestLilyFlower;
		jumps++;
	}

	cout << jumps << endl;
}
