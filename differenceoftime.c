#include<stdio.h>
#include<stdlib.h>
int main (){
	int hours[2],totalhours,i=0;
	int minutes[2],totalminutes;
	int seconds[2],totalseconds;
	for(i=0;i<2;i++){
	printf("enter the time%d\n",i+1);
	printf("hours:\n");
	scanf("%d",&hours[i]);
	printf("minutes\n:");
	scanf("%d",&minutes[i]);
	printf("seconds\n:");
	scanf("%d",&seconds[i]);
}
    if (hours[0] < hours[1] || 
       (hours[0] == hours[1] && minutes[0] < minutes[1]) ||
       (hours[0] == hours[1] && minutes[0] == minutes[1] && seconds[0] < seconds[1])) {
   	hours[0]=hours[0]+hours[1];
   	hours[1]=hours[0]-hours[1];
   	hours[0]=hours[0]-hours[1];
   	minutes[0]=minutes[0]+minutes[1];
   	minutes[1]=minutes[0]-minutes[1];
   	minutes[0]=minutes[0]-minutes[1];
   	seconds[0]=seconds[0]+seconds[1];
   	seconds[1]=seconds[0]-seconds[1];
   	seconds[0]=seconds[0]-seconds[1];
   }
  
   if(seconds[1]>seconds[0]){
   	seconds[0]+=60;
   	minutes[0]-=1;
   }
    totalseconds=seconds[0]-seconds[1];
   if(minutes[1]>minutes[0]){
   	minutes[0]+=60;
   	hours[0]-=1;
   } 
   totalminutes=minutes[0]-minutes[1];
   totalhours=hours[0]-hours[1];
   
    
    printf("difference:%d:%d:%d",totalhours,totalminutes,totalseconds);
	return 0;
	
}
