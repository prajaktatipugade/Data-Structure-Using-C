#include<stdio.h>
int main(){
	int a[10],j,i,n,temp;
	
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elemments:");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>a[temp]){
			
				a[j+1]=a[j];
				j--;
			
		
		}
		a[j+1]=temp;
		
	}
	printf("after sorting array :\t");
	for(i=0;i<n;i++)
	{
			printf("%d\t",a[i]);
	}
	
	return 0;
}
