#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[20] = "ABCDEFG";
    char b[10] = "BCD";
    printf("%s", strstr(a, b));
    return 0;
}                                                                                                                                                                                                                                                                                                                                   