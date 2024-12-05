#include<stdio.h>
int sum(int a, int b ) {
    if( a == b){
        return a;
    }
    return a + sum(a + 1, b);
}
int main() {
    int a,b;
    do {
        scanf("%d%d",&a,&b);
    } while(a>b);
    printf("%d",sum(a,b));
}