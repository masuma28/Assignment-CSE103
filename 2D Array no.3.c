//Hottest day for each city
#include<stdio.h>
int main(){
float temp[3][7];
int i,j,maxday;
float maxtemp;
for(i=0;i<3;i++){
   printf ("enter temperature of 7days of city:%d\n",i+1);
   for(j=0;j<7;j++){
    printf("day %d:",j+1);
    scanf("%f",temp[i][j]);
   }
    }
for (i=0;i<3;i++){
    maxtemp=0;
    for(j=0;j<7;j++){
    if(temp[i][j]>maxtemp)
        maxtemp= temp[i][j];
    maxday=j;
}
}
printf("city hottest day:%d %.2f\n",i+1,maxday+1,maxtemp);
return 0;
}
