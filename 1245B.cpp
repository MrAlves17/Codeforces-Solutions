#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int ra,pa,sa;
		cin >> ra >> pa >> sa;

		string bobPlays;
		cin >> bobPlays;

		int rb=0,pb=0,sb=0;
		for(int i=0; i<n; i++){
			if(bobPlays[i] == 'R') rb++;
			else if(bobPlays[i] == 'P')	pb++;
			else if(bobPlays[i] == 'S') sb++;
		}

		int wins = min(ra,sb)+min(pa,rb)+min(sa,pb);

		string alicePlays="";
		if(2*wins>=n){
			cout << "YES" << endl;
			for(int i=0; i<n; i++){
				if(bobPlays[i] == 'R' && pa){
					alicePlays += 'P';
					pa--;
				}
				else if(bobPlays[i] == 'P' && sa){
					alicePlays += 'S';
					sa--;
				}
				else if(bobPlays[i] == 'S' && ra){
					alicePlays += 'R';
					ra--;
				}
				else{
					alicePlays += '-';
				}
			}
			for(int i=0; i<n; i++){
				cout << alicePlays << endl;
				if(alicePlays[i] == '-' && ra){
					alicePlays[i] = 'R';
					ra--;
				}
				else if(alicePlays[i] == '-' && pa){
					alicePlays[i] = 'P';
					pa--;
				}
				else if(alicePlays[i] == '-' && sa){
					alicePlays[i] = 'S';
					sa--;
				}
			}

			cout << alicePlays << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}