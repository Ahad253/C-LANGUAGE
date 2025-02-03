#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
	int i,j;
	char str[45];
	char y[45];
	printf("enter the string :");
	gets (str);
	printf("\nentered string : ");
	puts(str);
	int x=strlen(str);
	for(i=0;i<=x;i++){
		if (!(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u')){
				y[j++]=str[i];
			}
		}
		y[j]='\0';
	printf("\nstring without vowels :");
	puts(y);
	return 0;
	
}

