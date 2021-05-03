#include <stdio.h>

void error_print(int x){
    printf("%d", x);
};
void main(void){
    int a, i;
    char b[3][10] = {"test1", "test2", "test3"};
    char *p = "%s\n";
    for (i = 0; i < 3; i++){
        printf(p, b[i]);
    }
    printf(p, "1~4 사이의 숫자를 입력하세요.");
    scanf("%d", &a);
    error_print(a);
    printf("\n");

    int auto_init_dim[] = {1, 2, 3, 4}; //차원을 명시하지 않아도, 저절로 차원을 초기화함.
    int jggdArr[][3] = {{1,2}, {3,4}, {5,6}}; //차원을 명시하지 않아도, 저절로 차원을 초기화함.
    int designated_init[] = {1,2,3, [10] = 11, [20] = 12}; /*처음부터 초기화를 하지 않고, 내가 원하는 부분만 초기화 할 수 있음.
                                                            초기화되지 않은 element는 0으로 자동 초기화.
                                                            배열의 element 개수를 지정하지 않아도, largest initialized position이 array의 size가 됨.*/

    int static_jggdArr[3][3] = {{1,2,3}, {4,5}}; //초기화되지 않은 element는 0으로 자동 초기화.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d", static_jggdArr[i][j]);
        }
    }
}