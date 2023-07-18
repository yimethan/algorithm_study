#include<iostream>
using namespace std;

int main(){
    int n, m, max=0;
    cin >> n >> m;
    
    int *num = new int[n];
    for(int i=0; i<n; i++) cin >> num[i];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int sum = num[i] + num[j] + num[k];
                if(sum > max && sum <= m) max = sum;
            }
        }
    }

    cout << max << endl;
}

/*
5 21 // n m
5 6 7 8 9
*/
// 21

/*
10 500
93 181 245 214 315 36 185 138 216 295
*/
// 497