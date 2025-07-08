#include <stdio.h>

int main(){

    char does[4] = {'1','2','3','4'};
    printf("%c\n",3[does]);
    printf("%c\n",*(does + 3));
    printf("%c\n",*(3 + does));
    printf("%c\n",does[3]);

    printf("Please press any key to exit.");
    getchar();
    return 0;
}