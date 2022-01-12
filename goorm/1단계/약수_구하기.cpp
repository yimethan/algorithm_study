#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *num = new int[n + 1]();
	
	for(int i=1; i<=n; i++) {
		if(n % i == 0) {
			num[i] = 1; 
			num[n / i] = 1;
		}
	}
	
	for(int i=1; i<=n; i++) {
		if(num[i] == 1) cout << i << ' ';
	}
}