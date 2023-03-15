#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p[20] = {'a', 'b','c','d'}, q[] = {"abc"};
    char r[] = "abcde";
    printf("r sizeof : %d\n", sizeof(r));
    printf("q sizeof : %d\n", sizeof(q));
    strcpy(p+strlen(q), r);
    strcat(p, q);
    printf("%d %d\n", sizeof(p), strlen(p));
    return 0;
}