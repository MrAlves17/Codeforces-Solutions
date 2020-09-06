#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		ll int a,b,q;
		cin >> a >> b >> q;

		vector<ll int> partialQtd(a*b+1);
		partialQtd[0] = 0;
		
		for(ll int j=0; j<a*b; j++){
			if((j%a)%b != (j%b)%a){
				partialQtd[j+1] = partialQtd[j]+1;
			}
			else{
				partialQtd[j+1] = partialQtd[j];
			}
		}

		for(int k=0; k<q; k++){
			ll int l,r;
			cin >> l >> r;
			ll int qtd = 0;

			ll int numAnalisados = 0;
			
			ll int x = l%(a*b), y=r%(a*b); // pos relativa de inicio
			
			qtd += partialQtd[a*b]*((r-l+1)/(a*b));
			if((r-l+1)%(a*b)!=0){
				if(x>y){
					qtd += partialQtd[a*b] - partialQtd[x] + partialQtd[y+1];
				}
				else{
					qtd += partialQtd[y+1] - partialQtd[x];
				}
			}

			
			cout << qtd << " ";
		}

		cout << endl;
	}

}
