//Display each word in opposite case formate
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char words [3][15];
int i,j;
printf("Enter 3 words:");
for(i=0;i<3;i++)
    scanf("%s",words[i]);
    printf("words in opposite case:\n");
    for(j=0;words[i][j]!='\0';i++)
        if(islower (words[i][j]))
        printf("%c",toupper(words[i][j]));
    else printf("%c",tolower(words[i][j]));
    printf("\n");
    return 0;
}

