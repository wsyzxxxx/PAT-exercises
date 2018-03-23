#include <stdio.h>

int main(void)
{
  int a1, a2, b1, b2;
  int i, n;
  int a3, b3;
  a3 = b3 = 0;
  
  scanf("%d", &n);
  for(i = 1; i <= n; i++)
  {
    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    if(a1 + b1 == a2)
    {
      if(a1 + b1 != b2)
        b3++;
    }
    else if(a1 + b1 == b2)
      a3++;
  }
  printf("%d %d\n", a3, b3);
  
  return 0;
}
