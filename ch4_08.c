#include <stdio.h>

int main()
{
    int ASCII_CODE;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ASCII_CODE);
    printf("문자:%c입니다.\n", (char)ASCII_CODE);

    return 0;
}