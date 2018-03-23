#include <stdio.h>

int main(void)
{
  double a, b, c;
  int re, repeat;
  scanf("%d", &repeat);
  
  for(re = 1; re <= repeat; re++)
  {
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b > c)
      printf("Case #%d: true\n", re);
    else
      printf("Case #%d: false\n", re);
  }
  return 0;
}
