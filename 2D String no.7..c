#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char words[10][20];
int n,i,j,hasvowels;
printf("enter number of small letter  words:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s",words[i]);
}
printf("words without vowels:\n");
for(i=0;i<n;i++){
    hasvowel=0;
    }
    for(j=0;words[i][j];j++){
    char ch=words[i][j];
if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' ch=='u')
    hasvowel=1;break;
    }
if(!hasvowel){
    printf("%s\n",words[i]);
}
return 0;
}

