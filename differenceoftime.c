#include<stdio.h>
#include<stdlib.h>
struct time{
	int hours;
	int minutes;
	float seconds;
};
int main (){
	struct time s[2],temp;
	int i=0,totalhours,totalminutes;
	float totalseconds;
	for(i=0;i<2;i++){
	printf("enter the time%d\n",i+1);
	printf("hours:\n");
	scanf("%d",&s[i].hours);
	if(s[i].hours>24||s[i].hours<0){
		printf("hours should be in range 0-24");
		return 0;
	}
	printf("minutes\n:");
	scanf("%d",&s[i].minutes);
		if(s[i].minutes>60||s[i].minutes<0){
		printf("minutes should be in range 0-59");
		return 0;
	}
	printf("seconds\n:");
	scanf("%f",&s[i].seconds);
		if(s[i].seconds>60||s[i].seconds<0){
		printf("seconds should be in range 0-59");
		return 0;
	}
}
    if (s[0].hours < s[1].hours || 
       (s[0].hours == s[1].hours && s[0].minutes < s[1].minutes) ||
       (s[0].hours == s[1].hours && s[0].minutes == s[1].minutes && s[0].seconds < s[1].seconds)) {
        temp = s[0]; 
        s[0] = s[1];
        s[1] = temp;
    }

  
   if(s[1].seconds>s[0].seconds){
   	s[0].seconds+=60;
   	s[0].minutes-=1;
   }
    totalseconds=s[0].seconds-s[1].seconds;
   if(s[1].minutes>s[0].minutes){
   	s[0].minutes+=60;
   	s[0].hours-=1;
   } 
   totalminutes=s[0].minutes-s[1].minutes;
   totalhours=s[0].hours-s[1].hours;
   
    
    printf("difference:%d:%d:%.2f",totalhours,totalminutes,totalseconds);
	return 0;
	
}
