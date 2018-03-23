#include <stdio.h>

int main(void)
{
  char words[80][30];
  char s[85];
  char *p = s;
  int i = 0, j = 0;
  gets(s);
  
  while(*p != '\0')
  {
    words[i][j++] = *p;
    p++;
    
    if(*p == ' ')
    {
      words[i][j] = '\0';
      i++;
      j = 0;
      p++;
    }
  }
  words[i][j] = '\0';
  
  while(i)
  {
    j = 0;
    while(words[i][j] != '\0')
      printf("%c",words[i][j++]);
    printf(" ");
    i--;
  }
  j = 0;
  while(words[i][j] != '\0')
    printf("%c",words[i][j++]);
  printf("\n");
  return 0;
}
