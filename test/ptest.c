#include <stdio.h>

int main(void){
    int *numptr;
    int num1 = 10; //주소가 0061FF18, 값: 10

    printf("%p\n", numptr); //0061FF18: 포인터 변수 numPtr의 값 출력
                            // 컴퓨터마다, 실행할 때마다 달라짐    
    printf("%p\n", &num1);  //0061FF18: 변수 num1의 메모리 주소 출력
                            // 컴퓨터마다, 실행할 때마다 달라짐

    printf("%d\n", *numptr); //10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴

    /*포인터 변수에 역참조 연산자(*)를 사용한 뒤 값을 할당해보기*/
    *numptr = 20;

    printf("%d\n", *numptr); //20
    printf("%d\n", num1);    //20

    /*포인터 변수에 값을 할당할 때 주의할 점*/
    numptr = num1; //컴파일 에러: numptr은 포인터 형 변수이고, num1은 인트 형 변수이므로 타입에러가 나온다.
    *numptr = num1; //정상 코드: *numptr을 씀으로써 numptr은 인트 형으로 취급 가능.
    numptr = &num1; //정상 코드: &num1을 씀으로써 num1의 포인터를 가져옴. 둘 다 포인터 형 변수로, 타입 일치.
}