#include<stdio.h>

struct Point {
    int x, y;
} a, b, c, d;

int main(){
    scanf("%d%d %d%d %d%d", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
    if(a.x==b.x) d.x=c.x;
    else if(a.x==c.x) d.x=b.x;
    else d.x=a.x;
    
    if(a.y==b.y) d.y=c.y;
    else if(a.y==c.y) d.y=b.y;
    else d.y=a.y;
    
    printf("%d %d\n", d.x, d.y);
    return 0;
}