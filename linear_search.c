#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[50],i,n,search_item;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("enter search element");
	scanf("%d",&search_item);
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		if(search_item==a[i]){
			printf("Elemnts is found at index :%d",i);
			
		}
	}
	if(i>n){
			printf("Elemnts is not found ");
	}
	return 0;
}
