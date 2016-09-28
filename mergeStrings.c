#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *merge(char *a, char *b)
{
    char *newString;
    int lenA = strlen(a);
    int lenB = strlen(b);
    int len = lenA+lenB;
    printf("%d",lenA);
    printf("%d",lenB);
    newString = (char *)malloc(sizeof(char)*(len+1));
    return newString;  
}

int main(int args, char *argv[])
{
    char *a,*b, *newString;

    scanf("%s",a);
    printf("%lu\n",strlen(a));
    printf("%s",a);
    newString = merge(a,b);
    return 0;
}
