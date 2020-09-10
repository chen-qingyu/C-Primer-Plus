#include <stdio.h>

int main(void)
{
    float height;
    char name[20];
    printf("Please enter your name and height(cm):");
    scanf("%s %f", name, &height);
    printf("%s, you are %.2f meter tall\n", name, height / 100.0);

    return 0;
}
