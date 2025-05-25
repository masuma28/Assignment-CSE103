//ratio of uppercase and lowercase letters
#include<stdio.h>
#include<ctype.h>
int main(){
char str[100];
int upper=0,lower=0;
printf("enter a string:");
gets(str);
for(i=0;str[i];i++){
    if(isupper(str[i]))
        upper++;
    else if (islower(str[i]))
        lower++;
}
printf("Uppercase:lowercase ratio:%d\n",upper,lower);
return 0;
}
