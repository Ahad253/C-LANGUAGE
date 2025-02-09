#include<stdio.h>
int main (){
	char str[100];
	int i=0,j=0;
	printf("enter the string :");
	gets(str);
	while(str[i]!='\0'){
		i++;
	}
	for(j=0;j<i/2;j++){
		str[j]=str[j]+str[i-j-1];
		str[i-j-1]=str[j]-str[i-j-1];
		str[j]=str[j]-str[i-j-1];
	}
	printf("\n%s",str);
	return 0;
}
