//Display the ration between teenager and non-teenager.
#include<stdio.h>
int main(){
int age[100],n,teen=0,nonteen=0,i;
printf("enter number of person:");
scanf("%d",&n);
printf("enter their age:\n");
for(int i=0;i<n;i++){
    scanf("%d",&age[i]);
    if (age[i]>=13 && age[i]<=19)
        teen++;
    else nonteen++;
    }
    printf("Teenager:Nonteenager=%d:%d\n",teen,nonteen);
    return 0;
    }



