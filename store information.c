#include<stdio.h>
	struct students{
		char name[20];
		char rollno[10];
		float marks;
	};
int main (){
	int m,i;
	printf("enter the number of students : \n");
	scanf("%d",&m);

	struct students students[m];
	for(i=0;i<m;i++){
		printf("enter the record of student[%d]:\n",i+1);
		printf("enter the name : \n");
		scanf("%s",students[i].name);
		printf("enter the roll number: \n");
		scanf("%s",students[i].rollno);
		printf("enter the marks:\n");
		scanf("%f",&students[i].marks);
	}
	for (i=0;i<m;i++){
		printf("name: %s \nroll number: %s \nmarks= %.2f\n\n\n",students[i].name,students[i].rollno,students[i].marks);
		
	}
	return 0;
}
