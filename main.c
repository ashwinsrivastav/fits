#include <stdio.h>
#include <stdlib.h>
//to know the day on 1st january of the year
int main()
{
    int year,leapYears=0,i=1,TotalDays;
printf("enter the year");
scanf("%d",&year);
           while(i<year)
           {
          if(i%4==0&&(i%100!=0||i%400==0))
             leapYears++;
             i++;
           }
           year=year-leapYears;
           TotalDays=year*365;
           TotalDays=TotalDays+(leapYears*366)-1;
           switch(TotalDays%7)
           {
           case 0:
            printf("Monday");
            break;
            case 1:
            printf("Tuesday");
            break;
            case 2:
            printf("Wednesday");
            break;
            case 3:
            printf("Thrusday");
            break;
            case 4:
            printf("Friday");
            break;
            case 5:
            printf("Saturday");
            break;
            default:
            printf("Sunday");
            break;
           }
    return 0;
}
