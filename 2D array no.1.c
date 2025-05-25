//Student with the highest total marks(3 subject)
#include<stdio.h>
int main(){
int marks[100][3],n,i,j,total,maxtotal=0,topper=0;
printf("enter number of  student:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter marks of student in 3 subject: %d",i+1);
    for(j=0;j<3;j++){
             scanf("%d",&marks[i][j]);

    }
}
for(i=0;i<n;i++){
    total=0;
    }
for(j=0;j<3;j++){
total+=marks[i][j];
if(total>maxtotal)
    total=maxtotal;
topper=i;
}

printf("student has the higest total marks=%d\n",topper+1,maxtotal);
return 0;
}
