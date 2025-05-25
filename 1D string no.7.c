//count number of words in a sentence
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int count=0,inword=0,i;
printf("enter a sentence:");
gets(str);
for(i=0;str[i]!='\0';i++){
    if(!isspace(str[i]&&i==0||isspace(str[i-1]))
    count++;
    }
printf("number of words:%d\n",count);
return 0;
}

