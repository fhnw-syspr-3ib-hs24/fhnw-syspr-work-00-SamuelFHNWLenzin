#include <stdio.h>
#include <limits.h>
#include <float.h>

void printSize()
{
    printf("printing basis type sizes \n");
    printf("char: ");
    printf("%lu\n", sizeof(char));
    printf("int: ");
    printf("%lu\n", sizeof(int));
    printf("long: ");
    printf("%lu\n", sizeof(long));
    printf("float: ");
    printf("%lu\n", sizeof(float));
    printf("double: ");
    printf("%lu\n", sizeof(double));
}

int main(int argc, char const *argv[])
{
    printSize();
    return 0;
}

