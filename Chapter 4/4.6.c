#include <stdio.h>
#include <string.h>

int main(void)
{
    char fn[20], ln[20];
    int fnl = 0, lnl = 0;

    printf("Please enter your first name and last name: ");
    scanf("%s %s", fn, ln);
    fnl = strlen(fn);
    lnl = strlen(ln);
    printf("%s %s\n", fn, ln);
    printf("%*d %*d\n", fnl, fnl, lnl, lnl);
    printf("%s %s\n", fn, ln);
    printf("%-*d %-*d\n", fnl, fnl, lnl, lnl);

    return 0;
}
