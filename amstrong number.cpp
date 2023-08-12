#include<stdio.h>
int main(){
	int n,reminder,reasult=0,original;
	printf("enter the number ");
	scanf("%d",n);
	original=n;
	while(original!=0){
		reminder=original%10;
		reasult+=reminder*reminder*reminder;
		original/=10;
	}
	if(reasult==n){
		printf("amstrong number %d",n);
	}
	else{
		printf("not a amstromg number %d",n);
	}
}
