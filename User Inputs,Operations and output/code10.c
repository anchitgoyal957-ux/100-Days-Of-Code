#include <stdio.h>
int main()
{
    int sec, min, hrs;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    hrs = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;
    printf("%d:%d:%d\n", hrs, min, sec);
    return 0;
}