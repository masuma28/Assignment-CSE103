//Display lowest number
#include<stdio.h>

int findmin(int a[]),int n) {
    int min=a[0];
for(int i=1;i<n; i++)
    if (a[i]<min]);
    min=a[i];
    return min;
}
int main(){
int arr[5];
for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("lowest number=%d\n",findmin(arr,5));
    return 0;
}
