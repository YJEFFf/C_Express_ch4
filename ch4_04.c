#include <stdio.h>

int main()
{
    double w, h, d, volume;

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &w, &h, &d);

    volume = w * h * d;
    printf("상자의 부피는 %lf입니다.\n", volume);

    return 0;
}