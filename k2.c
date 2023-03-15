#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a1[80], a2[80], *s1 = a1, *s2 = a2;
    gets(s1);
    gets(s2);
    printf("%d", strcmp(s1, s2)); 
    //strcmp(a, b)
    //若a长度大于b，则返回1
    //反之返回-1
    //相等便是0
    if (!strcmp(s1, s2))
        printf("*");
    else printf("#");
    printf("%d", strlen(strcat(s1, s2)));
    return 0;
}