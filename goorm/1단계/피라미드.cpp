#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int space = n - 1, star = 1;
	
	for(int i=1; i<=n; i++) {
		for(int j=0; j<space; j++) cout << ' ';
		for(int j=0; j<star; j++) cout << '*';
			
		space--;
		star += 2;
		cout << endl;
	}
}