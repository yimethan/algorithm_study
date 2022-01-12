#include <iostream>
using namespace std;
int main() {
	int n, count = 1;
	cin >> n;
	int *bar = new int[n];
	for(int i=0; i<n; i++) cin >> bar[i];
	int v = bar[n-1];
	for(int i=n-2; i>=0; i--) {
		if(bar[i] > v) {
			count++;
			v = bar[i];
		}
	}
	cout << count << endl;
}