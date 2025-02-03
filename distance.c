#include<stdio.h>
#include<math.h>
struct distance{
	int feet;
	float inches;
};
int main (){
	int i=0;
	struct distance distance[2];
	for (i=0;i<2;i++){
	printf("enter the distance[%d]:\n",i+1);
	printf("\nfeets :");
	scanf("%d",&distance[i].feet);
	printf("\ninches:");
	scanf("%f",&distance[i].inches);
}
    int x=distance[0].feet+distance[1].feet;                                          
    float y=distance[0].inches+distance[1].inches;
    int z;
    if(y>=12){
    	x+=y/12;
    	z=fmod(y,12);
    	y=z;
	}

	printf("\n%dfeet %.2finches",x,y);
	return 0;
}
