#include <stdio.h>

int main(void)
{
    int num;
    printf("Please enter a integer: ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", num++);
    }

    return 0;
}
