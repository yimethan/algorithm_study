#include<iostream>
using namespace std;

int main() {
    int e, s, m;
    cin >> e >> s >> m;
    int eIdx = 1, sIdx = 1, mIdx = 1, idx = 1;
    while(true) {
        if((e == eIdx) && (s == sIdx) && (m == mIdx)) {
            cout << idx << endl;
            return 0;
        }
        eIdx++; sIdx++; mIdx++; idx++;
        if(eIdx > 15) eIdx = 1;
        if(sIdx > 28) sIdx = 1;
        if(mIdx > 19) mIdx = 1;
    }
}