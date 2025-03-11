#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter Your Number:");
    scanf("%d", &num1,num2,num3);
    if(num1 > num2){
        printf("The Largest Number is:",&num1);
    }
    else if(num1 > num3){
        printf("The Largest Number is:",&num1);
    }
    else if(num2 > num3){
        printf("The Largest Number is:"&num2);
    }
    return 0;
}
