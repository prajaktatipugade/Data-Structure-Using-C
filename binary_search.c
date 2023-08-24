#include<stdio.h>
int main(){
	int a[50],i,n,search_item,beg=0,end=n,pass=-1,mid;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	printf("enter search element");
	scanf("%d",&search_item);
	while(beg<=end){
	
		mid=(beg+end)/2;
		if(a[mid]==search_item){
			pass=mid;
			printf("Elemnts is found at index :%d",pass);		
			break;
		}
		else if(search_item<a[mid]){
			end=mid-1;
		}
		else{
			beg=mid+1;
		}
	}
	
	return 0;
}
