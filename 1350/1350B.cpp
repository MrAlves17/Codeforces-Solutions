#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int biggestTree(vector<lli>& s, int i, int j, int k){
	int size=0;

	cout << "s[j] " << s[j] << " s[k] " << s[k] << endl;
	cout << "i " << i << " j " << j << " k " << k << endl;

	if(k<s.size() && k%j==0 && s[j] < s[k]){
		size = 1+biggestTree(s,i,k,k+1);
	}
	else if(k<s.size()){
		size = biggestTree(s,i,j,k+1);
	}
	else if(i+2<s.size()){
		cout << "oi" << endl;
		int size2=1+biggestTree(s,i+1,i+1,i+2);
		if(size2>size){
			cout << "size2 " << size2 << endl;
			size=size2;
		} 

	}

	return size;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<lli> s(n+1);
		for(int i=1; i<=n; i++){
			cin >> s[i];
		}

		int maior=0;

		for(int i=1; i<(1<<n); i++){
			if(i & 1 == 1){
				size++;
			}
		}

		cout << maior << endl;

	}

}