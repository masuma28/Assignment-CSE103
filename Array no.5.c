//avg of previous two days temperature
#include<stdio.h>
int main(){
    int temp[365],n,i;
printf("Enter number of days:");
scanf("%d",&n);
printf("enter temperature:");
for(i=0;i<n;i++)
    scanf("%d",&temp[i]);
    for(i=0;i<n;i++)
        if(temp[i]>temp[i-1]+temp[i-2]/2)

    printf("%d day is hotter than average last two days.\n",i+1,temp[i]);
    return 0;
}
