#include <stdio.h>
void main(){

	int arr1[50],arr2[50],limit,i,arr[50],temp,j;

	printf("enter the limit of array: ");
	scanf("%d",&limit);
	int arrlim=limit*2;
	printf("enter the elemets of array 1:");
	for(i=0;i<limit;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the elements of array 2:");
	for(i=0;i<limit;i++){
		scanf("%d",&arr2[i]);

	}
	//print elements of array

	printf("The elements of array 1: \t");
	for(i=0;i<limit;i++){
		printf("%d \t",arr1[i]);
	}
	printf("\n");
	printf("The elements of array 2: \t");
	for(i=0;i<limit;i++){
		printf("%d \t",arr2[i]);
	}

	//merging
	for(i=0;i<limit;i++){
		arr[i]=arr1[i];
	}
	for(i=0;i<limit;i++){
		arr[limit+i]=arr2[i];
	}


	//sort main array
	for(i=0;i<arrlim;i++){
		for(j=i+1;j<arrlim;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

    printf("\n");
	//print sorted array
    
	printf("The elements after merged and sorted : \t");
	for(i=0;i<arrlim;i++){
		printf("%d \t",arr[i]);
	}

}

