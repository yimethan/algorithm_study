#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int work, int target) {
    if(n == 1) {
        printf("%d %d\n", start, target);
        return;
    }
    hanoi(n-1, start, target, work);
    hanoi(1, start, work, target);
    hanoi(n-1, work, start, target);
}

int main(){
    int n, k;
    scanf("%d", &n);
    k = pow(2, n)-1;

    printf("%d\n", k);
    hanoi(n, 1, 2, 3);
    return 0;
 }