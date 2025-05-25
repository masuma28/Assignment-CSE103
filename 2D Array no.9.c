//Highest scoring team over 8 matches
#include<stdio.h>

int main(){
int score[5][8],i,j;
int total,maxtotal=0,maxteam=0;
printf("Enter score of each team:%d\n");
for(i=0;i<5;i++){
    printf("team %d",i+1);
    for(j=0;j<8;j++){
        printf("match%d",j+1);
        scanf("%d",&score[i][j]);
    }
} for(i=0;i<5;i++)
total=0;
for(j=0;j<8;j++)
    total+=score[i][j];
if(maxtotal<total)
    maxtotal=total;
maxteam=i;
printf("%d team has highest total score:\n",maxteam+1,maxtotal);
return 0;
}
