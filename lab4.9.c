#include<stdio.h>
int main(){
    int x = 10,sum = 33;

    printf("Initial x: %d\n", x);
    ++x;
    printf("After another Pre-Increment: %d\n", x);

    ++x;
    printf("After another Pre-Increment: %d\n", x);

    sum += x;
    printf("sum: %d\n", sum);

    x++;
    x++;
    printf("Final x: %d\n", x);
    printf("Final sum: %d\n", sum);

    return 0;
}
