#include <stdio.h>

int beforepat(char *p);
int pat(char *p, int a);
int afterpat(char *p, int a, int b);

int main(void)
{
  int re, repeat;
  char s[100];
  
  scanf("%d",&repeat);
  getchar();
  for(re = 1; re <= repeat; re++)
  {
    
    scanf("%s",s);
    getchar();
    
    if(beforepat(s))
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}

int beforepat(char *p)
{
  int flag = 1;
  int a = 0;
  while(*p)
  {
    if(*p != 'P' && *p != 'A')
    {
      flag = 0;
      break;
    }
    
    if(*p == 'A')
      a++;
      
    if(*p == 'P')
      break;
      
    p++;
  }
  p++;
  
  if(pat(p, a) && flag)
    return 1;
  else
    return 0;
}

int pat(char *p,int a)
{
  int flag = 1;
  int b = 0;
  if(*p != 'A')
    return 0;
    
  p++;
  
  if(*p == 'T')
  {
    p++;
    flag = afterpat(p, a, 0);
  }
  
  else if(*p == 'A')
  {
    while(*p != 'T' && *p && *p == 'A')
    {
      b++;
      p++;
    }
    if(*p == 'T')
      flag = afterpat(++p, a, b);
    else 
      return 0;
  }
  
  else
    return 0;
  
  if(flag)
    return 1;
  else
    return 0;
}

int afterpat(char *p, int a, int b)
{
  if(b == 0)
  {
    while(*p)
    {
      if(*p == 'A')
        p++;
      else
        return 0;
    }
    
    if(*p == '\0')
      return 1;
    else
      return 0;
  }
  
  else
  {
    a = a*(b+1);
    while(a--)
    {
      if(*p == 'A')
        p++;
      else
        return 0;
    }

    while(*p)
    {
      if(*p == 'A')
        p++;
      else 
        return 0;
    } 
    if(*p == '\0')
      return 1;
    else
      return 0;
  }
}
