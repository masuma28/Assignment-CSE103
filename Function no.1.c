//Gcd using function
#include<stdio.h>
int gcd(int a,int b){
while(b!=0){
    int temp =b;
    b=a%b;
    a=temp;
}
return a;
}
int main(){
int x,y;
printf("Enter two number:");
scanf("%d%d",&x,&y);
printf("GCD=%d\n",gcd(x,y));
return 0;
}
