#include<stdio.h>
struct vehicle{
char vehicle_id[20];
char type[30];
float price;
};
int main(){
struct vehicle v[5];
int i;
for(i=0;i<5;i++)
    printf("enter 5 vehicle id type and price %d:",i+1);
    scanf("%s %s %d",&v[i].vehicle_id,v[i].type,&v[i].price);
    printf("Vehicle %d:\n ID: %s\n:type:%s\nprice:%.2f\n,i+1,v[i].vehicle_ID,v[i].type,v[i].price);
    return 0;

}
