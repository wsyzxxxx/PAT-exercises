#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main(void)
{
    int m, n, i, j, count = 0;
    int isFirst = 0;
    
    scanf("%d %d", &m, &n);
    
    for(i = 0, j = 2; i < m-1; j++)
        if(isPrime(j))
            i++;
    
    for(; i < n; j++)
    {
        if(isPrime(j))
        {
            if(!isFirst)
            {
                i++;
                printf("%d", j);
                count++;
                isFirst = 1;
                continue;
            }
            i++;
            printf(" %d", j);
            count++;
            
            if(count % 10 == 0)
            {
                printf("\n");
                isFirst = 0;
            }
        }
    }
}

int isPrime(int x)
{
    int i;
    for(i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
            return 0;
    return 1;
}
