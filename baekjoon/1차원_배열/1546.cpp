#include<iostream>
using namespace std;

int main(){
    double test, sum=0, max=0, score[1000];
    cin >> test;
    for(int i=0; i<test; i++) {
        cin >> score[i];
        if(max<score[i]) max=score[i];
    }
    for(int i=0; i<test; i++) sum += score[i] / max * 100;
    cout << sum/test << endl;
}