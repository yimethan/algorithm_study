#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int num[5];
    for(int i=0; i<5; i++) cin >> num[i];
    int res = 1;
    while(true) {
        int count = 0;
        for(int i=0; i<5; i++) {
            if(res % num[i] == 0) {
                count++;
                if(count >= 3) {
                    cout << res << endl;
                    return 0;
                }
            }
        }
        res++;
    }
}