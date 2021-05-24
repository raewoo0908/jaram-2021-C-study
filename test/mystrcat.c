#include <stdio.h>

char *strcat(char *dest, const char *src)
{
        char *tmp = dest;

        /* dest 문자열의 null byte 위치(문자열 끝)를 찾습니다. */
        while (*dest != '\0') dest++;

        /*
         * dest 문자열끝에서 부터 src 문자열을 계속 복사합니다.
         * src 문자열의 마지막 null byte까지 복사한 후,
         * 루프문을 종료합니다.
         */
        while ((*dest++ = *src++) != '\0'){
            
        }
        return tmp;
}

int main(void){
    char dest[] = "I am a boy, ";
    char src[] = "you are a girl.";
    strcat(dest, src);
    printf("dest: %s\n", dest);

    return 0;
}