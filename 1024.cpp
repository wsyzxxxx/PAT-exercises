#include <cstdio>

int main()
{
  char s[20000];
  char a[20000];
  int b;
  int i, j;
  scanf("%s", s);
  char *p = s;
  char c1, c2;
  c1 = *p;
  p++;
  a[0] = *p;
  j = 1;
  p+=2;
  while(*p != 'E')
    a[j++] = *p++;
  p++;
  c2 = *p;
  p++;
  b = 0;
  while(*p)
    b = b*10 + *(p++) - '0';
  if(c1 == '-')
    printf("-");
  a[j--] = '\0';
  if(c2 == '+'){
    if(b >= j){
      printf("%s", a);
      for(i=0;i<b-j;i++) printf("0");
    }
    else{
      i=1;
      printf("%c", a[0]);
      while(b--)
        printf("%c", a[i++]);
      printf(".");
      printf("%s", &a[i]);
    }
    } 
    else{
    if(b==0)
    {
      printf("%c.",a[0]);
      printf("%s", &a[1]);
  }
    else{ 
      printf("0.");
      i = 0;
      b--;
      while(b--)
        printf("0");
      printf("%s", a);
      } 
    }
    
    printf("\n");
    return 0;
  }
