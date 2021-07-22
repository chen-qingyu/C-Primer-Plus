#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[20], last[20];
    int first_len, last_len;
    printf("Please enter your first name and last name: ");
    scanf("%s %s", first, last);
    first_len = strlen(first);
    last_len = strlen(last);
    printf("a. \"%s %s\"\n", first, last);
    printf("b. \"%20s %20s\"\n", first, last);
    printf("c. \"%-20s %-20s\"\n", first, last);
    printf("d. \"%*s %*s\"\n", first_len + 3, first, last_len + 3, last);

    return 0;
}
