#include<iostream>
using namespace std;

string board[50];

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int countW(int x, int y){
    int count=0;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != WB[i][j]) count++;
        }
    }
    return count;
}

int countB(int x, int y){
    int count=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != BW[i][j]) count++;
        }
    }
    return count;
}

int main(){
    int n, m, count=0, min=500;
    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> board[i];

    for(int i=0; i+8 <= n; i++){
        for(int j=0; j+8 <= m; j++){
            int count1 = countW(i, j);
            int count2 = countB(i, j);
            if(count1 < count2){
                if(count1 < min) min = count1;
            } else {
                if(count2 < min) min = count2;
            }
        }
    }
    cout << min;
}