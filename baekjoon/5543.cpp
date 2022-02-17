#include<iostream>
using namespace std;

int main() {
    int burger[3], bev[2], minBurger = 2001, minBev = 2001;
    for(int i=0; i<3; i++) {
        cin >> burger[i];
        if(burger[i] < minBurger) minBurger = burger[i];
    }
    for(int i=0; i<2; i++) {
        cin >> bev[i];
        if(bev[i] < minBev) minBev = bev[i];
    }
    cout << (minBurger + minBev - 50) << endl;
}