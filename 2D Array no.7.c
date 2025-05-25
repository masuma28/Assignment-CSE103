#include<stdio.h>
int main(){
int books[6][5],i,j,maxstudent=0,maxmonth=0,maxbooks=0;
for(i=0;i<6;i++)
    printf("enter number of books borrowed by student in 5 month:%d\n",i+1);
    for(j=0;j<5;j++)
        printf("month%d:",j+1);
    scanf("%d",&books[i][j]);
}
for(i=0;i<6;i++)
    for(j=0;j<5;j++)
if(books[i][j]>maxbooks)
    maxbooks=[i][j];
    maxstudent=i;
    maxmonth=j;
    printf("student borrowed book most %d:\n",maxstudent+1);
    printf("most borrowed book month%d:\n",maxmoth+1,maxbooks);
    return 0;
    }

