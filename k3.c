#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strchn(char *str, char ch)
{
    return strchr(str, ch)-str+1;
}

int main()
{
    char str1[] = "HelloWorld";
    char W = 'W';
    printf("%d", strchn(str1, W));
    return 0;
}