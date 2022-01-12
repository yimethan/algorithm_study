#include <iostream>
using namespace std;
int main() {
	int hand[5], rsp[4] = {0,}, winner = 0;
	for(int i=0; i<5; i++) {
		cin >> hand[i];
		rsp[hand[i]] = 1;
	}
	
	int count = 0;
	for(int i=1; i<=3; i++) {
		if(rsp[i] == 1) count++;
	}
	
	if(count == 1 || count == 3) cout << 0 << endl;
	else {
		if(rsp[1] == 0) winner = 3;
		else if(rsp[2] == 0) winner = 1;
		else if(rsp[3] == 0) winner = 2;
		
		count = 0;
		for(int i=0; i<5; i++) {
			if(hand[i] == winner) count++;
		}
		
		cout << count << endl;
	}
}