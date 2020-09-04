#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);

	long long int n;
	for(int i=0; i<t; i++){
		scanf("%lld", &n);
		if(n<=2) printf("0\n");
		else{
			long long int qtd = ceil(n/2.0-1);
			printf("%lld\n", qtd);
		}
	}
}