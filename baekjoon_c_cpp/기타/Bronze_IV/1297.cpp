#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double d, h, w;
    cin >> d >> h >> w;
    
    double height = d / sqrt(1 + (w * w) / (h * h));
    double width = height * w / h;

    cout << (int)height << ' ' << (int)width << endl;
}