#include <stdio.h>

int main(void)
{
    int age, days;
    printf("请输入你的年龄：");
    scanf("%d", &age);
    days = age * 365;
    printf("年龄:%d 天数:%d\n", age, days);

    return 0;
}
