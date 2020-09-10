#include <stdio.h>

int main(void)
{
    float fs, ds;
    printf("Please enter the file size(MB) and download speed(Mb/s):");
    scanf("%f %f", &fs, &ds);
    printf("File size: %.2f MB\nDownload speed: %.2f Mb/s\nDownload time: %.2f s\n", fs, ds, fs * 8 / ds);

    return 0;
}
