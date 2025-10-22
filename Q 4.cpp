#include<stdio.h>

int main(){
	char str[100];
	int i;
	char ch;
	
	printf("enter a sentence:");
	scanf("%[^\n]",str);
	
	for(i=0;str[i]!='\0';i++){
		ch=str[i];
		
		if(ch>='A' && ch<='Z'){
			str[i]=str[i]=32;
		}
		else if(ch>='a' && ch<='z'){
			str[i]=str[i]-32;
		}	
	}
	printf("converted sentence is:%s\n",str);
	return 0;
}
