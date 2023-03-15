#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[20] = "abcd";
    char *sp = s;
    sp++;
    puts(strcat(sp, "ABCD"));
    return 0;
}