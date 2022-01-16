#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	unsigned long long n;
	string t;
	cin >> n >> t;

	if(t.length() == 1) {
		if(t[0] < 'A') cout << t[0] - '0' + 1 << endl;
		else cout << t[0] - 55 + 1 << endl;
		return 0;
	}
	
	reverse(t.begin(), t.end());
	
	for(int i=2; i<=16; i++) {
		unsigned long long sum = 0;
		for(int j=0; j<t.length(); j++) {
			if(t[j] < 'A') sum += (t[j] - '0') * pow(i, j);
			else sum += (t[j] - 55) * pow(i, j);
		}
		if(sum == n) {
			cout << i << endl;
			return 0;
		}
	}
}