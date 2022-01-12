#include <iostream>
using namespace std;
int main() {
	unsigned long long n, count = 0;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		count += (n - i) * (n - i);
	}
	
	cout << count << endl;
}