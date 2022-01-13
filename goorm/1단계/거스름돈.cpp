#include <iostream>
using namespace std;
int main() {
	int n, fh = 0, oh = 0, fd = 0, od = 0;
	cin >> n;
	int money = 1000 - n;
	
	while(money != 0)
		if(money >= 500) {
			fh++;
			money -= 500;
		} else if(money >= 100) {
			oh++;
			money -= 100;
		} else if(money >= 50) {
			fd++;
			money -= 50;
		} else {
			od += (money / 10);
			money = 0;
		}
	
	cout << fh << ' ' << oh << ' ' << fd << ' ' << od << ' ';
}