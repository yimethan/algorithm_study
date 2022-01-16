#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, r, minIdx = -1;
	double d[5], min = 1000;
	cin >> x >> y >> r;
	
	for(int i=0; i<5; i++) {
		int a, b;
		cin >> a >> b;
		
		d[i] = sqrt(pow(x - a, 2) + pow(y - b, 2));
		if(d[i] <= r && d[i] < min) {
			min = d[i];
			minIdx = i;
		}
	}
	
	if(minIdx == -1) cout << -1 << endl;
	else cout << minIdx + 1 << endl;
}