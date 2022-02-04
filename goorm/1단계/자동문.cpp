#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double L, a, v; // L : 자동문 길이, a: 자동문의 가속도, v: 적외선 신호의 속도
        cin >> L >> a >> v;
        double time = sqrt(L * 2 / a);
        double dist = v * time; // 자동문이 닫히는 동안 적외선 신호가 이동한 총 거리
        printf("%.2lf\n", dist);
    }
}