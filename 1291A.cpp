#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int n;
	for(int i=0; i<t; i++){
		cin >> n;

		string s;
		cin >> s;
		bool ebne = true;
		unsigned long long int sum=0;
		for(int j=0; j<n; j++){
			sum += (int)s[j]-(int)'0';
		}
		if(((int)s[n-1]-(int)'0')%2!=0){
			if(sum%2!=0){
				ebne = false;
				for(int j=0; j<n-1 && !ebne; j++){
					if(((int)s[j]-(int)'0')%2!=0){
						s.erase(j,1);
						ebne = true;
					}
				}
			}
		}
		else{
			ebne = false;
			for(int j=n-1; j>=0 && !ebne; j--){
				if(((int)s[j]-(int)'0')%2==0){
					s.erase(j,1);
				}
				else{
					if(sum%2!=0){
						for(int k=0; k<s.size()-1 && !ebne; k++){
							if(((int)s[k]-(int)'0')%2!=0){
								s.erase(k,1);
								ebne = true;
							}
						}
					}
					else{
						ebne = true;
					}

					break;
				}
			}
		}

		int j=0;
		while(j<s.size()-1 && s[j] == '0'){
			s.erase(j,1);
		}
		if(ebne){
			cout << s << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}