#include <stdio.h>

int main(void)
{
  char name[100][20],num[100][20];
  int score[100];
  int n, i;
  int max = -1, min = 101, maxindex, minindex;
  
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%s %s %d", name[i], num[i], &score[i]);
    
  for(i = 0; i < n; i++)
  {
    if(score[i] >= max)
    {
      maxindex = i;
      max = score[i];
    }
    
    if(score[i] <= min)
    {
      minindex = i;
      min = score[i];
    }
  }
  
  printf("%s %s\n", name[maxindex], num[maxindex]);
  printf("%s %s\n", name[minindex], num[minindex]);
}
