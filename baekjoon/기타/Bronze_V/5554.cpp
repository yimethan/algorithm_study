#include<iostream>
using namespace std;

int main() {
    int time[4], sec = 0;
    for(int i=0; i<4; i++) {
        cin >> time[i];
        sec += time[i];
    }
    int min = sec / 60;
    sec %= 60;
    cout << min << endl << sec;
}