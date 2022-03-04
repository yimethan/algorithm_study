#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int drawing[101][101]={0,};
    while(n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<=x2; i++) {
            for(int j=y1; j<=y2; j++) {
                drawing[i][j]++;
            }
        }
    }
    int count = 0;
    for(int i=1; i<=100; i++) {
        for(int j=1; j<=100; j++) {
            if(drawing[i][j] > m) count++;
        }
    }
    cout << count << endl;
}