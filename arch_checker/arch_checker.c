#include <stdio.h>
typedef unsigned char *pointer;

int main()
{
    int a = 0x0001;
    pointer start = &a;
    printf("%lubit\n", sizeof(long)*8);
    *start != 0 ? printf("Little-endian\n") : printf("Big-endian\n");
    
    return 0;
}