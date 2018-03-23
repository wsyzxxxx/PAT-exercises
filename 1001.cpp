#include<stdio.h>
int main(void)
{
    int n,i;
    i=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
        i=i+1;
    }
    printf("%d",i);   
}
