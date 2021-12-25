#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int x1, x2, y1, y2, r1, r2, count;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        int sub = abs(r1 - r2);

        if(d == 0 && r1 == r2) count = -1;
        else if(d < (r1 + r2) && (sub < d)) count = 2;
        else if(d == r1 + r2 || sub == d) count = 1;
        else count = 0;

        cout << count << endl;
    }
}