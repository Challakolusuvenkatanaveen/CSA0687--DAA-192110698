#include<stdio.h>
int main(){
		int arr[10],n,i ;
		printf("enter the number");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(i=1;i<n;i++){
			if(arr[0]<arr[i]){
				arr[0]=arr[i];
			}
		}
		printf("large =%d",arr[0]);
}
