#include <stdio.h>
int main(void)
{
    char n[1005];
    char *p;
    gets(n);
    char i;
    int count;
    
    for(i = '0'; i <= '9'; i++)
    {
        count = 0;
        p = n;
        while(*p)
        {
            if(*p == i)
                count++;
            p++;
        }
        if(count)
            printf("%c:%d\n", i, count);
    }
}
