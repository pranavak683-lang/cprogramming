#include <stdio.h>

int main() {
    // Write C code here
    int mynum = 10;
    int *point = &mynum;
    printf("%d \n", mynum);
    printf("%p \n", &mynum);
    printf("%p \n", point);
    return 0;
}