#include<stdio.h>
int main (){
	char s[100];
	char p[100];
	int i=0,j=0,z=0;
	printf("enter the string1:");
	gets(s);
	while(s[i]!='\0'){
		i++;
	}
	printf("enter the string2:");
	gets(p);
	for(j=0;j<i;j++){
		p[z++]=s[j];
	}
	p[z]='\0';
	printf("copying string1 in string2 : %s",p);
	return 0;
	
}
