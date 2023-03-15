#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int) time(NULL));
    int a = rand()%100 + 1;
    int number;
    while (1)
    {
        scanf("%d", &number);
        if (number > a)
        {
            printf("number > a\n");
            continue;
        }
        else if (number < a)
        {
            printf("number < a\n");
            continue;
        }
        else
        {
            printf("number == a");
            return 0;
        }
    }
    return 0;
}