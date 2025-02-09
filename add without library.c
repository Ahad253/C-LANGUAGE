#include<stdio.h>
int main (){
	char s[100];
	char p[100];
	int i=0,j=0,z=0;
	printf("enter the string 1:\n");
	gets(s);
	while(s[i]!='\0'){
		i++;
	}
	printf("enter the string 2:");
	gets(p);
	while(p[j]!='\0'){
		j++;
	}
	for(z=0;z<=j;z++){
		s[i+z]=p[z];
	}
	p[z]='\0';
	printf("On adding string 1 and string 2: %s",s);
	return 0;
}
