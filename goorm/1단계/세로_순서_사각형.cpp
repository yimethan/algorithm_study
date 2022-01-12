#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		int num = i;
		for(int j=1; j<=n; j++) {
			cout << num << ' ';
			num += n;
		}
		cout << endl;
	}
}