#include<stdio.h>

struct Date
{
    int Day , Year ;
    char Month[50] ;
};

int main()
{
    struct Date info ;

    printf("Enter the day please\n");
    scanf("%d" , &info.Day);

    printf("Enter the month please\n");
    scanf("%s" , &info.Month);

    printf("Enter the year please\n");
    scanf("%d" , &info.Year);

    printf("\nToday's date is %dth %s, %d\n" , info.Day , info.Month , info.Year);
    return 0 ;
}