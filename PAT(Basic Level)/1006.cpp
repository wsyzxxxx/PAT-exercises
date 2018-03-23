#include <stdio.h>

int main(void)
{
  int n, i, b, s, g;
  scanf("%d",&n);
  
  if(n < 100)
  {
    if(n < 10)
      for(i = 1; i <= n; i++)
        printf("%d",i);
    else
    {
      g = n % 10;
      s = n / 10;
      for(i = 1; i <= s; i++)
        printf("S");
      for(i = 1; i <= g; i++)
        printf("%d",i);
    }
  }
  
  else
  {
    b = n / 100;
    s = n % 100 /10;
    g = n % 10;
    for(i = 1; i <= b; i++)
        printf("B");
    for(i = 1; i <= s; i++)
        printf("S");
    for(i = 1; i <= g; i++)
        printf("%d",i);
        
  }
  
  printf("\n");
}
