#include <stdio.h>

int main() {
    int day, month, year;
    int first_day=31, first_month=12, first_year=30000;

    while(1){
        printf("Enter a date : ");
        scanf("%d-%d-%d",&day,&month,&year);
        if (day == 0){
            break;
        }
        if (year < first_year){
            first_year = year;
            first_month = month;
            first_day = day;
        }
        else if (month < first_month){
             first_year = year;
             first_month = month;
             first_day = day;
        }
        else if (day < first_day){
             first_year = year;
             first_month = month;
             first_day = day;
        }
    }
     printf("earliest date = %02d-%02d-%04d",first_day,first_month,first_year);

    return 0;
}
