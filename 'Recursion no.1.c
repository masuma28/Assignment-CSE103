//funtion to calculate factorial using recursion
#include<stdio.h>
int factorial(int n){
if (n==0 || n==1){
    return 1;//base case
    else
        return n*factorial(n-1);
        //recursive case
}
}
int  main(){
int num;
printf("enter a positive integer:");
scanf("%d",&num);
if (num<0)
    printf("factorial not define for negative number\n");
    else
        printf("factorial of  %d is: %d\n",num,factorial(num));
    return 0;
}

