#include <stdio.h>

int main(void)
{
    char a1[70], a2[70];
    char b1[70], b2[70];
    int i;
    int weekday, time, minute, weekdayflag = 0;
    
    scanf("%s %s %s %s", a1, a2, b1, b2);
    
    for(i = 0; i <70 && a1[i] != '\0' && a2[i] != '\0'; i++)
    {
        if(a1[i] >= 'A' && a1[i] <= 'G' && a1[i] == a2[i] && !weekdayflag)
        {
            weekday = i;
            weekdayflag = 1;
            i++;
        }
        
        if(weekdayflag && a1[i] == a2[i] && ((a1[i] >= 'A' && a1[i] <= 'N') || (a1[i] >= '0' && a1[i] <= '9')))
        {
            time = i;
            break;
        }
    }
    
    for(i = 0; i < 70 && b1[i] != '\0' && b2[i] != '\0'; i++)
    {
        if(b1[i] >= 'A' && b1[i] <= 'Z' && b1[i] == b2[i])
        {
            minute = i;
            break;
        }
        else if(b1[i] >= 'a' && b1[i] <= 'z' && b1[i] == b2[i])
        {
            minute = i;
            break;
        }
    }
    
    switch(a1[weekday])
    {
        case 'A':printf("MON ");break;
        case 'B':printf("TUE ");break;
        case 'C':printf("WED ");break;
        case 'D':printf("THU ");break;
        case 'E':printf("FRI ");break;
        case 'F':printf("SAT ");break;
        case 'G':printf("SUN ");break;
    }
    
    if(a1[time] >= '0' && a1[time] <= '9')
        printf("%02d:", a1[time] - '0');
    else
        printf("%02d:", a1[time] - 'A' + 10);
    
    printf("%02d", minute);
}
