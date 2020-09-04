#include <bits/stdc++.h>
#define int64 long long int

using namespace std;

int main(){
	int64 n;
	scanf("%lld", &n);

	int64 b[n];
	int64 a[n];
	int64 maior = 0;
	for(int64 i=0; i<n; i++){
		scanf("%lld", &b[i]);

		a[i] = b[i]+maior;
		if(a[i]>maior){
			maior = a[i];
		}
		printf("%lld ", a[i]);
	}
	printf("\n");

}