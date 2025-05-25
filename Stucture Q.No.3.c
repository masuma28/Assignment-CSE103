//employee structure (find highest salary)
#include<stdio.h>
struct employee{
int id;
char name[40];
float salary;
};
int main(){
struct employee e[3];
int i,max_index=0;
for(i=0;i<3;i++)
    printf("Enter 3 employee ID,age,salary %d\n:",i+1);
    scanf("%d %s %f,&e[i].id,&e[i].name,&e[i]salary);
    if(e[i].salary> e[max_index].salary){
        max_index=i;
    }
    printf("highest salary:\n");
    printf("ID:%d\n Name:%s\n salary:%.2f\n",e[max_index].id,e[max_index].name,e[max_index].salary);
    return 0;

}
