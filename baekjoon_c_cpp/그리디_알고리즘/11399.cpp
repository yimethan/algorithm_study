#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int *time = new int[n];
    for(int i=0; i<n; i++) scanf("%d", &time[i]);
    sort(time, &time[n]);
    int sum = time[0];
    for(int i=1; i<n; i++) {
        time[i] = time[i] + time[i-1];
        sum += time[i];
    }
    printf("%d", sum);
    delete [] time;
}