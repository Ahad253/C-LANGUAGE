#include<stdio.h>
#include<math.h>
struct distance{
	int feet;
	float inches;
};
int main (){
	struct distance s[2];
	int totalfeet,i=0,x=0;
	float totalinches;
	for (i=0;i<2;i++){
	printf("enter the distance %d:\n",i+1);
	printf("enter feet:");
	scanf("%d",&s[i].feet);
	if (s[i].feet<0){
		printf("distance cannot be negative!");
		return 0;
	}
	printf("enter inches:");
	scanf("%f",&s[i].inches);
	if (s[i].inches<0){
		printf("distance cannot be negative!"); }
	}
	
	totalfeet=s[0].feet+s[1].feet;
	totalinches=s[0].inches+s[1].inches;
	printf("%.2f\n",totalinches);
	
if (totalinches >= 12) {
    totalfeet += totalinches / 12;  
    totalinches=fmod(totalinches,12);           
}
	printf("total distance:%dfeets and %.2finches",totalfeet,totalinches);
		return 0;
	
}
