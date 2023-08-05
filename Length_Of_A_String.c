#include<stdio.h>

int length(char*);

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    printf("The length: %d\n",length(str));
}

int length(char *str)
{
    int i=0, k=0;
    while(str[i]!='\0') 
    {
        i++;
        k++;
    }
    return k;
}
