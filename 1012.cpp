#include <stdio.h>

int main(void)
{
    int i, n;
    int a[1005];
    int a1, a2, a3, a4, a5;
    a1 = a2 = a3 = a4 = a5 = 0;
    int flag2 = 1,isflag2 = 0;
    int count4 = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for(i = 0; i < n; i++)
        if(a[i] % 5 == 0 && a[i] % 2 == 0)
            a1 += a[i];
    
    for(i = 0; i < n; i++)
    {
        if(a[i] % 5 == 1)
        {
            a2 += a[i] * flag2;
            flag2 = -flag2;
            isflag2 = 1;
        }
    }
    
    for(i = 0; i < n; i++)
        if(a[i] % 5 == 2)
            a3++;
    
    for(i = 0; i < n; i++)
        if(a[i] % 5 == 3)
        {
            count4++;
            a4 += a[i];
        }
    
    for(i = 0; i < n; i++)
        if(a[i] % 5 == 4 && a[i] >= a5)
            a5 = a[i];
    
    if(a1)
        printf("%d", a1);
    else
        printf("N");
    
    printf(" ");
    
    if(isflag2)
        printf("%d", a2);
    else
        printf("N");
    
    printf(" ");
    
    if(a3)
        printf("%d", a3);
    else
        printf("N");
    
    printf(" ");
    
    if(a4)
        printf("%.1f", 1.0*a4/count4);
    else
        printf("N");
    
    printf(" ");
    
    if(a5)
        printf("%d", a5);
    else
        printf("N");
}
