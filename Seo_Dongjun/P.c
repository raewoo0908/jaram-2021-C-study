#include <stdio.h>

int main(void) {

	int a, b;
	printf("아무 수나 두 숫자를 입력해주세요.\n");
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);

	return 0;
}

/*.C파일 컴파일하는 방법: gcc -o <오브젝트 파일 이름> <컴파일하고자 하는 .c 파일 이름>
오브젝트 파일 실행하는 방법: ./오브젝트 파일 이름
*/