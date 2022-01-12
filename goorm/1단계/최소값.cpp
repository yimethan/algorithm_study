#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n, min = INT_MAX;
	cin >> n;
	int *num = new int[n];
	for(int i=0; i<n; i++ ){
		cin >> num[i];
		if(num[i] < min) min = num[i];
	}
	
	cout << min << endl;
}