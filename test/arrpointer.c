#include <stdio.h>
#define N 100

int main(void){
    int a[N], i, *p, sum = 0;
    p = a;
    p = &a[0];

    p = a+1;
    p = &a[1];

    for (p = a; p < &a[N]; ++p){
        sum += *p;
    }

    printf("%d\n", sum);
}