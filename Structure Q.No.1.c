#include<stdio.h>
struct student{
char name[50];
int age;
float marks;
};
int main(){
struct student s[3];
int i,max_age=0;
float avg_age=0;
for(i=0;i<3;i++){
    printf("enter name,age,marks of student%d:",i+1);
    scanf("%s %d %f",&s[i].name,&s[i].age,&s[i].marks);
    avg_age+=s[i].age;
    if(s[i].age>max_age)
        max_age=s[i].age;
}
printf("Average age= %.2f\n",avg_age/3);
printf("maximum age=%d\n",max_age);
return 0;
}
