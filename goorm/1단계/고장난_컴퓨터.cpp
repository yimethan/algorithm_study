#include <iostream>
using namespace std;
int main() {
	int n, c, count = 1; // 입력한 글자 수 n, 코드 유지 시간 c
	cin >> n >> c;
	
	int *num = new int[n];
	for(int i=0; i<n; i++) cin >> num[i];
	
	if(n == 1) {
		cout << 1 << endl;
		return 0;
	}
	
	for(int i=0; i<n-1; i++) {
		int time = num[i+1] - num[i];
		if(time <= c) count++;
		else count = 1;
	}
	
	cout << count << endl;
}