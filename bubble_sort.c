//bubble sort
#include<stdio.h>
int main(){

	int i,j,n;
	int temp,a[10];
	
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elemments:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d\t",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++){
		
		if(a[j]>a[j+1]){
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	
		}
	
	}
	printf("after sorting array :\t");
	for(i=0;i<n;i++)
	{
			printf("%d\t",a[i]);
	}
	
	return 0;
	
}  
