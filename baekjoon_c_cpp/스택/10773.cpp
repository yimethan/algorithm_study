#include<iostream>
#include<stack>
using namespace std;

stack<int> S;

int main() {
    int t, n, sum = 0;
	cin >> t;
	while(t--) {
		cin >> n;
		if (n == 0) S.pop();
		else S.push(n);
	}
	while(!S.empty()) {
		sum += S.top();
		S.pop();
	}
	cout << sum << '\n';
}