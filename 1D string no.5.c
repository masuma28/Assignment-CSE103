//count uppercase & lowercase vowels
#include<stdio.h>

int main(){
char str[100],ch;
int upper=0,lower=0,i;
printf("enter a string:\n");
gets(str);
for(i=0;i<strlen(str);i++){
    char str[i];
    if(ch=='a'|| ch='e'|| ch='i'|| ch='o'|| ch='u')
        lower++;
    else if(ch='A'|| ch='E'|| ch='I'|| ch='O'|| ch='U');
    upper++;
    }
    printf("uppercase vowels",upper);
    printf("lower vowels",lower);
    return 0;
}
