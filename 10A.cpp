#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, p1, p2, p3, t1, t2;

	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

	vector<pair<int, int> > intervals(n);
	int energyConsumed=0;
	for(int i=0; i<n; i++){
		cin >> intervals[i].first >> intervals[i].second;
		energyConsumed += p1*(intervals[i].second - intervals[i].first);
	}

	for(int i=0; i<n-1; i++){
		if(intervals[i+1].first - intervals[i].second >= t1+t2){
			energyConsumed += p1*t1 + p2*t2 + p3*(intervals[i+1].first - intervals[i].second - (t1+t2));
		}
		else if(intervals[i+1].first - intervals[i].second >= t1){
			energyConsumed += p1*t1 + p2*(intervals[i+1].first - intervals[i].second - t1);
		}
		else{
			energyConsumed += p1*(intervals[i+1].first - intervals[i].second);
		}
	}
	cout << energyConsumed << endl;
}