#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int n, int start, int work, int target){
    if(n == 1)
        cout << start << ' ' << target << "\n";
    else{
        hanoi(n - 1, start, target, work);
        hanoi(1, start, work, target);
        hanoi(n - 1, work, start, target);
    }
}

int main(){
    int n;
    cin >> n;

    cout << pow(2, n) - 1 << "\n";
    hanoi(n, 1, 2, 3);
}