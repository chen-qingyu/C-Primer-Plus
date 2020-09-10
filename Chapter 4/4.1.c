#include <stdio.h>

int main(void)
{
    char first[20], last[20];
    printf("Please enter your first name:");
    scanf("%s", first);
    printf("Please enter your last name:");
    scanf("%s", last);
    printf("Hello! %s %s~\n", last, first);

    return 0;
}
