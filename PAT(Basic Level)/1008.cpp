#include <stdio.h>
int main(void)
{
  int n, m, i;
  int a[200];
  
  scanf("%d %d", &n, &m);
  m %= n;
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
  
  for(i = 1; i <= n ; i++)
    a[n-i+m] = a[n-i];
    
  for(i = 0; i < m; i++)
    a[i] = a[n+i];
  
  printf("%d",a[0]);
  for(i = 1; i < n; i++)
    printf(" %d",a[i]);
  printf("\n");
  
  return 0;
}
