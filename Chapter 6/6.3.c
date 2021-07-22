#include <stdio.h>

int main(void)
{
    char ch;
    for (int i = 0; i < 6; i++)
    {
        for (ch = 'F'; ch >= 'F' - i; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
