#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, y, n;
		cin >> x >> y >> n;

        if(x < 0) x = -x;
  	    if(y < 0) y = -y;
		
        n -= x; n -= y; // the necessary moves
        if(n < 0) cout << "NO" << endl;
        else if (n % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}