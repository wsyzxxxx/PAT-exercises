#include <stdio.h>

void list(int num,int *p);
int check(int *p, int i);
void sort(int *p, int n);
void printnum(int *p);

int main(void)
{
  int n, i, j, count = 0;
  int num[100] = {0};
  int sortresult[100];
  int checkresult[100] = {0};
  
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%d",&num[i]);
  
  for(i = 0; i < n; i++)
  {
    if(num[i])
    {
      list(num[i], sortresult);
      for(j = 0; j < n; j++)
      {
        if(!num[j])
          continue;
        if(check(sortresult, num[j]))
        {
          num[j] = 0;
        }
      }
    }
  }
  

  sort(num, n);

  printnum(num);
  
  return 0;
} 

void list(int num,int *p)
{
  int i = 0;
  
  while(num != 1)
  {
    if(num % 2 == 0)
      num = num/2;
    else
      num = (num*3+1)/2;
    p[i++] = num;
  }
  p[i-1] = 0;
  int a = 0;
}

int check(int *p, int i)
{
  int a;
  for(a = 0; a < 100; a++)
  {
    if(!p[a])
      break;
    if(p[a] == i)
    {
      return 1;
    }
  }
  return 0;
}

void sort(int *p, int n)
{
  int i, j, temp;
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n-i; j++)
    {

      if(p[j] < p[j+1])
      {
        temp = p[j+1];
        p[j+1] = p[j];
        p[j] = temp;
      }
    }
  }
}

void printnum(int *p)
{
  int i, j = 0;
  int result[100];
  for(i = 0; i < 100; i++)
    if(p[i])
      result[j++] = p[i];
  result[j] = 0;
  printf("%d",result[0]);
  i = 1;
  while(result[i] != 0)
    printf(" %d",result[i++]);
  printf("\n");
}
