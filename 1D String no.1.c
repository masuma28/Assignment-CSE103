//Ratio between uppercase and lowercase letters
#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int upper=0,lower=0,i;
printf("enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
    if(upperstr([i]))
        upper++;
    elseif(islower(str[i]));
    lower++;
    printf("Ratio of letter(upper/lower)=%.2f\n",(float)upper/lower);
    return 0;
}
