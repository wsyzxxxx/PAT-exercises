#include <stdio.h>
int main(void)
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    
    if((b-a)%100 >= 50)
        printf("%02d:%02d:%02d", (int)(b-a)/100/3600, (int)(b-a)/100%3600/60, (int)(b-a)/100%60+1);
    else
        printf("%02d:%02d:%02d", (int)(b-a)/100/3600, (int)(b-a)/100%3600/60, (int)(b-a)/100%60);
}
