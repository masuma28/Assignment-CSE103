//Check full marks
#include<stdio.h>
int main(){
int marks[100],n,found=0;
printf("Enter number of students marks:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&marks[i]);
    if(marks[i]==30)
        found=1;
}
if(found)printf("someone got full marks.\n");
else printf("no one got full marks.\n");
return 0;
}
