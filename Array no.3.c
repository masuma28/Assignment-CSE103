//Above average CGPA
#include<stdio.h>
int main(){
int n,count=0,i;
float cgpa[100],avg,sum=0;
printf("Enter number of student cg:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter cgpa their %d:",i+1);
scanf("%f",&cgpa[i]);
sum+=cgpa[i];
}
avg=sum/n;

    printf("%d student scored above average cgpa:\n");
for(int i=0;i<n;i++)
    if(cgpa[i]>avg)
        count++;
    printf("student %d:cgpa=%.2f\n",i+1,cgpa[i]);
    return 0;
}
