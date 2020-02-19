#include<stdio.h>
#include<time.h>

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void modified_selection_sort()
{
	int arr[100],i,j,n,max,k;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter k");
	scanf("%d",&k);
	printf("Enter the array elements");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i < k ; i++)
	{
		max = i;
		for(j = i+1 ; j < n ; j++)
		{
			if (arr[j] > arr[max]) 
      		{
        		max = j;
        		
        	}
        	
        }
        
       
        swap(&arr[i],&arr[max]);
	}
	printf("The %d largest elements are",k);
	for(i=0 ; i<k ; i++)
	{
		printf("%d -> ",arr[i]);
	}
}
		
int main()
{
	clock_t start,end; 
    start = clock(); 
    modified_selection_sort(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("selectionsort() took %f seconds to execute \n", time_taken); 
    return 0; 
}
