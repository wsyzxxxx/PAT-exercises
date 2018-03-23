#include<stdio.h>
int main()
{
    char input[101];
    int i;
    input[0] = getchar();
    for(i = 0; input[i] != '\n';)
        input[++i] = getchar();
    int n = 0;
    for(i = 0; input[i] != '\n'; i++)
        n += input[i] - '0';
    char output[100];
    for(i = 0; n > 0; i++){
        output[i] = n%10 + '0';
        n /= 10;
    }
    i--;
    while(i>0){
        switch(output[i]){
            case '0':printf("ling");break;
            case '1':printf("yi");break;
            case '2':printf("er");break;
            case '3':printf("san");break;
            case '4':printf("si");break;
            case '5':printf("wu");break;
            case '6':printf("liu");break;
            case '7':printf("qi");break;
            case '8':printf("ba");break;
            case '9':printf("jiu");break;
        }
        printf(" ");
        i--;
    }
    switch(output[i]){
        case '0':printf("ling");break;
        case '1':printf("yi");break;
        case '2':printf("er");break;
        case '3':printf("san");break;
        case '4':printf("si");break;
        case '5':printf("wu");break;
        case '6':printf("liu");break;
        case '7':printf("qi");break;
        case '8':printf("ba");break;
        case '9':printf("jiu");break;
    }
    printf("\n");
}
