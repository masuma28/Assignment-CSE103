//Hottest year and month
#include <stdio.h>
int main(){
int temp[5][12],j,i;
int Hotyear=0,hotmonth=0;
float maxtemp;
printf("Enter maximum temperature for each month(5y*12m):\n");
for(i=0;i<5;i++){
    printf("year %d:\n",i+1);
    for (j=0;j<12;j++){
        printf("month%d:",j+1);
    scanf("%f",&temp[i][j]);
}
}
maxtemp=temp[0][0];
for(i=0;i<5;i++)
for(j=0;j<12;j++){
    if(temp[i][j]>maxtemp)
    maxtemp=temp[i][j];
    Hotyear=i;
    hotmonth=j;
}
printf("hottest temperature was %.2fc in year %d,month%d\n",maxtemp,Hotyear+1,hotmonth+1);
return 0;
}
