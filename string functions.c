#include<stdio.h>
#include<string.h>
int main (){
	char str1[100];
	printf("enter the string 1 : ");
	gets(str1);
	printf("entered string : ");
	puts(str1);
	char str2[100];
	printf("enter the string 2: ");
	gets(str2);
	printf("entered string : ");
	puts(str2);
	printf("\nadding both strings : %s \n",strcat(str1,str2));
	strcpy(str1,str2);
	printf("\ncopying string 2 into string 1 : %s \n",str1);
	strrev(str1);
	printf("\n reverse of string 1 is : %s",str1);
	printf("\n length of string 1 is %d ",strlen(str1));
	return 0;
	
}
