#include<stdio.h>
#include<time.h>

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void insertionsort()
{
	int arr[100],i,j,n,item;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1 ; i < n ; i++)
	{
		item = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>item)
		{
			arr[j+1] = arr[j]; 
      		j = j-1;
        }	
        		
        arr[j+1] = item;	
        	
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
    insertionsort(); 
    end = clock(); 
    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC; 
  
    printf("insertionsort() took %f seconds to execute \n", time_taken); 
    return 0; 
}
