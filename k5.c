#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[80], *sp = "HELLO!";
    sp = strcpy(s, sp);
    s[0] = 'h';
    puts(sp); 
    puts(s);
    return 0;
}
