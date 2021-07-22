#include <stdio.h>

int main(void)
{
    char ch;
    int i, j;
    printf("Please enter a capital letter: ");
    scanf("%c", &ch);
    int length = ch - 'A' + 1;
    for (i = 0; i < length; i++)
    {
        char tmp = 'A' - 1;
        for (j = 0; j < length - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", ++tmp);
        }
        for (j = 0; j < i; j++)
        {
            printf("%c", --tmp);
        }
        printf("\n");
    }

    return 0;
}
