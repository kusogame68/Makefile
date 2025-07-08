#include <stdio.h>
#include <string.h>

int main(){
    char *str = "GCC Hello World!";
    printf("Pointer size : %lld\n",sizeof(str));
    printf("String length : %zu\n", strlen(str));
    printf("%s\n",str);

    printf("Please press any key to exit.");
    getchar();
    return 0;
}