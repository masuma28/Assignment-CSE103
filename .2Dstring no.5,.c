//vowels in uppercase consonant in lowercase
#include<stdio.h>
#include<string.h>
int main(){
char word[10][20];
int i,j,n;
printf("enter number of words:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%s",&word[i]);
    }
    for(j=0;word[i][j];j++){
    char ch=word[i][j];
    if (ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'||ch=='A'||ch=='I'||ch=='E'ch=='O'||ch=='U')
        printf("%c",toupper(words[i][j]));
    else
        printf("%c",tolower(words[i][j]));
        }
        return 0;

}
