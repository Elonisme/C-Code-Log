#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20] = "HELLO WORLD";
    puts(str);

    memset(str, 90, 5);
    puts(str);
    return 0;
}