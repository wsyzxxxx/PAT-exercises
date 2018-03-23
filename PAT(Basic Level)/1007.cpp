#include <stdio.h>
#include <math.h>

int nextprime(int i);
int judgeprime(int i);

int main(void)
{
  int n, count, i, temp;
  scanf("%d",&n);
  count = 0;
  
  if(n <= 3)
    printf("0\n");
  else
  {
    i = 3;
    temp = nextprime(i);
    while(temp <= n)
    {
      if(temp - i == 2)
        count++;
      i = temp;
      temp = nextprime(i);
    }
    printf("%d\n",count);
  }
  return 0;
}

int nextprime(int i)
{
  i++;
  while(!judgeprime(i))
    i++;
  return i;
}

int judgeprime(int i)
{
  int j;
  for(j = 2; j <= sqrt(i); j++)
    if(i % j == 0)
      return 0;
  return 1;
}
