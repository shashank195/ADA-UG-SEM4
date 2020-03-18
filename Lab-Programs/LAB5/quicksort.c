 
#include<stdio.h> 
#include<time.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main() 
{ 
    int arr[10],size,i;
    clock_t timereq;
    float cpu_time;
   printf("Enter size\n");
   scanf("%d",&size);
   printf("Enter array elements\n");
   for(i=0;i<size;i++)
   scanf("%d",&arr[i]);
   timereq= clock();
    quickSort(arr, 0, size-1); 
    timereq=clock()-timereq;
    cpu_time=((float)(timereq))/CLK_TCK;
    printf("Sorted array: "); 
    printArray(arr, size); 
    printf("Time taken in seconds : %f\n",cpu_time);
    return 0; 
} 
