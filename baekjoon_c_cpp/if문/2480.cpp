#include<iostream>
using namespace std;

int main() {
    int dice[3];
    for(int i=0; i<3; i++) cin >> dice[i];

    if((dice[0] == dice[1]) && (dice[1] == dice[2])) cout << (10000 + dice[0] * 1000) << endl;

    else if((dice[0] == dice[1]) || (dice[0] == dice[2])) cout << (1000 + dice[0] * 100) << endl;
    else if(dice[1] == dice[2]) cout << (1000 + dice[2] * 100) << endl;

    else {
        int max = 0;
        for(int i=0; i<3; i++) {
            if(max < dice[i]) max = dice[i];
        }
        cout << (max * 100) << endl;
    }
}