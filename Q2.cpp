#include<stdio.h>

int main(){
	int arr[10],num,i;
	int count=0;
	printf("Enter 10 numbers ");
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
}
    printf("enter a number:");
    scanf("%d",&num);
    
    for(i=0;i<10;i++){
    	if(arr[i]==num){
    		count++;
		}
	}
	if(count>0){
		printf("%d occurred %d times in array",num,count);
	}
	else{
		printf("Number not found");
	}
	return 0;
}
