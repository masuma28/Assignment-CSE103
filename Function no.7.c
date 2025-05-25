//count vowels in a word using funtion
#include<stdio.h>
int countvowels(char str[]){
int count=0,i;
for(i=0;str[i]!= '\0';i++)
    char ch=str[i];
    if (ch='a'||ch=='e'||ch=='i'||ch=='o'||ch='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        count++;
}
return count;
}
int main(){
char word[50]
printf("enter a word:");
scanf("%s",word);
printf("number of vowels:%d\n",countvowels(word));
return 0;
}
