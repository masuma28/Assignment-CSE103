//count number of a words in a sentence
#include<stdio.h>
int main(){
char str[100];
int i,count=0;
printf("enter a sentence:");
gets(str);
for(i=0;str[i];i++){
    if(str[i]==''&&str[i+1]!==''&& str[i+1]!='\0')
        count++;
        }
    printf("Number of words:%d\n",count+1);
    return 0;
    }



