#include <stdio.h>

int main()
{
    double pyeong, m2;
    const double SQMETER_PER_PYEONG = 3.3058;

    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong);

    m2 = pyeong * SQMETER_PER_PYEONG;
    printf("%lf평방미터입니다.\n", m2);

    return 0;
}