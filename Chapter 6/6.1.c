#include <stdio.h>

int main(void)
{
    char alphabet[26];
    for (int i = 0, a = 'a'; a <= 'z'; a++, i++)
    {
        alphabet[i] = a;
        printf("%c ", alphabet[i]);
    }

    return 0;
}
