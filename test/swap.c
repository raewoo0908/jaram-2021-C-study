#include <stdio.h>

void swap(int *p, int *q){ // call by reference
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main(void){
    int i = 3, j = 5;
    swap(&i,&j);
    printf("%d %d\n", i, j);
    return 0;
}