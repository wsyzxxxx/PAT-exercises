#include <stdio.h>

int main(void)
{
    int i, n , temp, sum, j, k, note;
    char op;
    scanf("%d %c", &n, &op);
    
    for(i = 1, temp = 1, sum = 1; sum <= n; i++)
    {
        if(temp == 1)
            temp = 6;
        else
            temp = (temp/2+2)*2;
        sum += temp;
    }
    
    i--;
    sum -= temp;
    temp /= 2;
    temp -= 2;
    note = temp;
    
    for(j = 1; j <= i; j++)
    {
        k = (note - temp)/2;
        while(k--)
            printf(" ");
        k = temp;
        while(k--)
            printf("%c",op);
        printf("\n");
        temp -= 2;
    }
    
    temp += 2;
    
    for(j = 1; j < i; j++)
    {
        temp += 2;
        k = (note - temp)/2;
        while(k--)
            printf(" ");
        k = temp;
        while(k--)
            printf("%c",op);
        printf("\n");
    }
    
    printf("%d\n",n-sum);
}
