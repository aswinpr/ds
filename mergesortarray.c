#include <stdio.h>
void main(){

	int arr1[50],arr2[50],limit,i,arr[50],temp,j;
	printf("enter the limit of array: ");
	scanf("%d",&limit);

	printf("enter the elemets of array 1:");
	for(i=0;i<limit;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the elements of array 2:");
	for(i=0;i<limit;i++){
		scanf("%d",&arr2[i]);

	}
/*	//print elements of array
 *
	printf("The elements of array 1: \t");
	for(i=0;i<limit;i++){
		printf("%d",arr1[i]);
	}
	printf("The elements of array 3: \t");
	for(i=0;i<limit;i++){
		printf("%d",arr2[i]);
	}
*/

	//sort main array



	//print sorted array

	printf("The elements of arr: \t");
		for(i=0;i<limit;i++){
			printf("%d \t",arr[i]);
		}

}

