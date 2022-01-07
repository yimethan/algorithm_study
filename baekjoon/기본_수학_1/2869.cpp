#include<iostream>
using namespace std;

int main(){
    int v, a, b, current=0, day=1;
    cin >> a >> b >> v;

    // while(true){
    //     day++;
    //     current += a;
    //     if(current >= v) break;
    //     current -= b;
    // }

    day += (v - a) / (a- b);

    if((v - a) % (a - b) != 0) day++;

    cout << day << endl;
}