#include<iostream>
using namespace std;

#define WHITE 0
#define BLUE 1
#define PASS 2

int paper[128][128];
int blueCount = 0, whiteCount = 0;

void countPaper(int x, int y, int size) {
    int color = paper[x][y];
    for(int i=x; i<x+size; i++) {
        for(int j=y; j<y+size; j++) {
            if(color == WHITE && paper[i][j] == BLUE) color = PASS;
            else if(color == BLUE && paper[i][j] == WHITE) color = PASS;
            if(color == PASS) {
                countPaper(x, y, size/2);
                countPaper(x, y+size/2, size/2);
                countPaper(x+size/2, y, size/2);
                countPaper(x+size/2, y+size/2, size/2);
                return;
            }
        }
    }
    if(color == WHITE) whiteCount++;
    else if(color == BLUE) blueCount++;
    return;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) cin >> paper[i][j];
    }
    countPaper(0, 0, n);
    cout << whiteCount << '\n' << blueCount << '\n';
}