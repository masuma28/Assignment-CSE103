//count vowels in each word
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char words[10][20];
    int i,j,n;
printf("enter number of words:");
scanf("%d",&n);
printf("enter %d words:\n",n);
for(i=0;i<n;i++){
    scanf("%s",words[i]);
}
for(j=0;words[i][j];j++){
    char ch=words[i][j];
if(ch=='a'||ch=='e'||ch||=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='E'||ch=='U')
    count++;
    }
printf("word:%s,vowelcount:%d\n",words[i],count);
return 0;
}
