#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int h,l;
	cin >> h >> l;

	double x = (pow(l,2) - pow(h,2))/(2*h);
	cout << setprecision(13) << fixed;
	cout << x << endl;

}
/*
(h+x)² = l²+x²

x = (l² - h²)/(2*h)
*/