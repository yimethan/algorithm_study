#include <iostream>
using namespace std;
int main() {
	double lit, eng, mat, avg;
	char gr;
	cin >> lit >> eng >> mat;
	
	avg = (lit + eng + mat) / 3;
	
	if(avg >= 90) gr = 'A';
	else if(avg >= 80) gr = 'B';
	else if(avg >= 70) gr = 'C';
	else if(avg >= 60) gr = 'D';
	else gr = 'F';
	
	printf("%.2lf %c", avg, gr);
}