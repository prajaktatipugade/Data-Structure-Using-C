//selction sort
#include<stdio.h>
int main(){

	int i,j,flag,n,min;
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
	    min=i;
		for(j=i+1;j<n;j++){
		
		if(a[j]<a[min]){
		
			min=j;
		
		}
	
		}
		if(min!=i){
		    
		    temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	
	}
	printf("after sorting array :\t");
	for(i=0;i<n;i++)
	{
			printf("%d\t",a[i]);
	}
	
	return 0;
	
}  
