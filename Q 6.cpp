#include<stdio.h>

int main(){
	char str[100];
	int countv=0,countc=0;
	int i;
	char ch;
	printf("enter a word:");
	scanf("%s",&str);
	
    for(i=0; ;i++){
        ch=str[i];
        
        if(ch=='\0'){
        	break;
		}
    	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='i' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
    		countv++;
		}
		else{
			countc++;
		}
		}
	}
	printf("vowel is:%d\n",countv);
	printf("consonent is:%d",countc);
	return 0;
	}
