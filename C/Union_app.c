#include<stdio.h>
#include<stdlib.h>

#define NUM 4
struct{
	char name[40];
	int num;
	char sex;
	char pro;
	union d{
		int score;
		char course[10];
	}sc;
} bodys[NUM];
int main(){
	int i;
	for(i=0;i<NUM;i++)
	{
		printf("Please input info:");
		scanf("%s %d %c %c",&bodys[i].name,&bodys[i].num,&bodys[i].sex,&bodys[i].pro);
		if (bodys[i].pro == 's'){
			scanf("%d",&bodys[i].sc.score);
			printf("\n%s\t%d\t%c\t%c\t%d",bodys[i].name,bodys[i].num,bodys[i].sex,bodys[i].pro,bodys[i].sc.score);
		}
		else{
			scanf("%s",&bodys[i].sc.course);
			printf("\n%s\t%d\t%c\t%c\t%s",bodys[i].name,bodys[i].num,bodys[i].sex,bodys[i].pro,bodys[i].sc.course);
		}
	}
	return 0;
}
