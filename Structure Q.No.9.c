//Best student to teacher ratio
#include <stdio.h>
struct school{
char name [40];
int students;
int teachers;
};
int main(){
struct school s[5];
int i,bestindex=0;
float ratio,bestratio;
for(i=0;i<5;i++)
scanf("%s %d %d,&s[i].name,&s[i].students,s[i].teachers");

    }
for (i=0;i<5;i++)
    ratio=(float){s[i].students/s[i].teachers};
printf(school with student and teacher ratio %.2f\n",ratio)
return 0;
}
