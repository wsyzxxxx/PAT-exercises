#include <stdio.h>

int main(void)
{
    struct {
        char num[15];
        int test, exam;
    }stu[1005];
    
    int check;
    int c[1005];
    int n, i, j;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%s %d %d", stu[i].num, &stu[i].test, &stu[i].exam);
    
    scanf("%d", &check);
    for(i = 0; i < check; i++)
        scanf("%d", &c[i]);
    
    for(i = 0; i < check; i++)
    {
        for(j = 0; j < n; j++)
            if(stu[j].test == c[i])
            {
                printf("%s %d\n", stu[j].num, stu[j].exam);
                break;
            }
    }
}
