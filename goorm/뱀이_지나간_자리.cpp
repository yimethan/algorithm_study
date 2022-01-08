#include <iostream>
using namespace std;
int main() {
	int n, m, land[200][200]={0,};
	cin >> n >> m;
	
	for(int i=1; i<=n; i+=4) {
		for(int j=1; j<=m; j++) land[i][j] = 1;
		land[i+1][m] = 1;
		for(int j=1; j<=m; j++) land[i+2][j] = 1;
		land[i+3][1] = 1;
	}
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(land[i][j]) cout << '#';
			else cout << '.';
		}
		cout << endl;
	}
}