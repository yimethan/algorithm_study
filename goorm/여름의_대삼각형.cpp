#include<iostream>
using namespace std;

int main() {
    int x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    double area = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
	
		if (area < 0) area = -area;
    
    printf("%.2f\n", area / 2);
}