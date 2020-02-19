#include<stdio.h>
#include<time.h>

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void selectionsort()
{
	int arr[100],i,j,n,min,pos;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0 ; i < n-1 ; i++)
	{
		min = i;
		for(j = i+1 ; j < n ; j++)
		{
			if (arr[j] < arr[min]) 
      		{
        		min = j;
        		
        	}
        	
        }
        
       
        swap(&arr[i],&arr[min]);
	}
	printf("The sorted array is");
	for(i=0 ; i<n ; i++)
	{
		printf("%d -> ",arr[i]);
	}
}
		
int main()
{
	clock_t start,end; 
    start = clock(); 
    selectionsort(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("selectionsort() took %f seconds to execute \n", time_taken); 
    return 0; 
}
