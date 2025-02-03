#include<stdio.h>
#include<ctype.h>
int main (){
	int vowel=0,consonants=0,space=0;
	int digit=0,i=0;
	char str[100];
	printf("enter a string : ");
	gets(str);
	puts(str);
	while(str[i]!=0){
		if (isalpha(str[i])){ 
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u'){
			vowel++;
		}
		else {
			consonants++;
		}
	}
		if(str[i]==32){
		space++;	
		}
		if (isdigit(str[i])){
			digit++;
		}
			
		i++;
	}
	printf("\nnumber of vowels are %d ",vowel);
	printf("\nnumber of consonants are %d ",consonants);	
	printf("\nnumber of digits are %d ",digit);	
	printf("\nnumber of white spaces are %d ",space);
	return 0;	
}
