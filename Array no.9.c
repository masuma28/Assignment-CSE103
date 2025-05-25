//check  full marks
#include<stdio.h>
int main(){
int n,marks[100],full=0;
printf("Enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter marks:\n");
scanf("%d",&marks[i]);
if(marks[i]==30)
    full=1;}
    if(full)
        printf("at least one student got full marks.\n");
    else printf("no one get full marks.\n");
    return 0;
}
