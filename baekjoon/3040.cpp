#include<iostream>
using namespace std;

int main() {
    int hat[9], sum = 0, i, j;
    for(int i=0; i<9; i++) {
        cin >> hat[i];
        sum += hat[i];
    }
    for(int i = 1; i<9; i++) {
        for(int j=0; j<i; j++) {
            if(sum - hat[i] - hat[j] == 100) {
                for(int k=0; k<9; k++) {
                    if(k != i && k != j) cout << hat[k] << endl;
                }
                return 0;
            }
        }
    }
}