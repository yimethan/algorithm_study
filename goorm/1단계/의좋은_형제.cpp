#include <iostream>
using namespace std;
int main() {
	int day, jinwoo, sunwoo;
	cin >> jinwoo >> sunwoo >> day;
	bool to = false;
	
	while(day--) {
		if(!to) { // to sunwoo
			if(jinwoo % 2 == 1) sunwoo++;
			jinwoo /= 2;
			sunwoo += jinwoo;
		}
		else { // to jinwoo
			if(sunwoo % 2 == 1) jinwoo++;
			sunwoo /= 2;
			jinwoo += sunwoo;
		}
		to = !to;
	}
	cout << jinwoo << ' ' << sunwoo << endl;
}