//Prime number check
#include<stdio.h>
int isprime(int n){
for(int i=2;i<=n/2;i++){
        if(n%i==0)        }
return 1;
    }
int main(){
int num;
printf("enter a number:");
scanf("%d",&num);
if(isprime(num))
    printf("prime number\n");
    else
        printf("not prime number\n");
    return 0;
}
