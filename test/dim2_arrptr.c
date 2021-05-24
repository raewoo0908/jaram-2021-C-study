#include <stdio.h>

int main()
{
    int numArr[3][4] = {    // 세로 3, 가로 4 크기의 int형 2차원 배열 선언
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    int (*numPtr)[4] = numArr; //풀어서 설명하면 가로 크기가 4인 배열을 가리키는 포인터라는 뜻입니다.

    printf("%p\n", *numPtr); // 002BFE5C: 2차원 배열 포인터를 역참조하면 세로 첫 번째의 주소가 나옴
                             // 컴퓨터마다, 실행할 때마다 달라짐

    printf("%p\n", *numArr); // 002BFE5C: 2차원 배열을 역참조하면 세로 첫 번째의 주소가 나옴
                             // 컴퓨터마다, 실행할 때마다 달라짐

    printf("%d\n", numPtr[2][1]);    // 110: 2차원 배열 포인터는 인덱스로 접근할 수 있음
    numPtr[2][1] = 1;
    printf("%d\n", numPtr[2][1]);
    printf("%d\n", numPtr[2][1] = 2);

    printf("%d\n", sizeof(numArr));  // 48: sizeof로 2차원 배열의 크기를 구하면 배열이 메모리에 
                                     // 차지하는 공간이 출력됨

    printf("%d\n", sizeof(numPtr));  // 4 : sizeof로 2차원 배열 포인터의 크기를 
                                     // 구하면 포인터의 크기가 출력됨(64비트라면 8)

    /*주의!!*/
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4;
    int *ptrPtr[4] = { &num1, &num2, &num3, &num4 };    // int형 포인터를 4개 담는 배열
    printf("%p\n", *ptrPtr);
    printf("%d\n", **ptrPtr);
    return 0;
}