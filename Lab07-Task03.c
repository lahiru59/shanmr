#include<stdio.h>
int main(){
    int dayofWeek;
    printf("Day OF Week Value:");
    scanf("%d", &dayofWeek);

    switch(dayofWeek){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Other Day\n");
    }
    return 0;
}
