#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p1[] = "abcdef", *p = p1;
    p += 3;
    printf("%d\n", strlen(strcpy(p, "ABCD")));
    return 0;
}