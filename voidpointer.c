#include <stdio.h>
int main()
{
    int a=345;
    float b=8.34560927636;
    void *ptr;
    ptr=&b;
    printf("value of b is %lf", *((float*)ptr));
}