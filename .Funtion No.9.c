//check perfect number using function
#include<stdio.h>
#include<stdbool.h>
bool isperfect(int n){
for(i=1;i<n;i++)
    if(n%i==0)
        sum+=i;
    return sum==n;
}
int main(){
int num;
printf("enter a number:");
scanf("%d",&num);
if(isperfect(num)
   printf("perfect number\n");
   else
    printf("not perfect number\n");
    return 0;
   }
