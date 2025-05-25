//city structure(Highest population density)
#include<stdio.h>
struct city{
char name[30];
int population;
float area;};
int main(){
struct city c[3];
int i,maxindex=0;
float density,maxdensity;
for(i=0;i<3;i++)
    printf("enter city1 name,population,area:\n"
           "enter city2 name,population,area:\n"
           "enter city3 name,population,area:\n");
           scanf("%s %d %f",&c[i].name,&c[i].population,&c[i].area);
maxdensity=c[0].population/c[0].area;
for(i=0;i<3;i++){
    density=c[i].population/c[i].area;
    if(density>maxdensity){
        maxdensity=density;
        maxdensity=i;
    }
}
printf("\n Highest city with population density:");
printf("name:%s\nDensity:%.2f\n,c[max index].name,maxdensity");
return 0;
}

