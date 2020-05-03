#include <bits/stdc++.h> 
using namespace std; 
  
#define N 5 
 
struct MinHeapNode { 
   
    int element; 
    int i; 
    int j; 
}; 
void swap(MinHeapNode* x, MinHeapNode* y); 

class MinHeap { 
    MinHeapNode* harr; 
  
    int heap_size; 
  
public: 
    MinHeap(MinHeapNode a[], int size); 
  
    void MinHeapify(int); 
  
    int left(int i) { return (2 * i + 1); } 
  
    int right(int i) { return (2 * i + 2); } 
  
    MinHeapNode getMin() { return harr[0]; } 
  
    void replaceMin(MinHeapNode x) 
    { 
        harr[0] = x; 
        MinHeapify(0); 
    } 
}; 
  
MinHeap::MinHeap(MinHeapNode a[], int size) 
{ 
    heap_size = size; 
    harr = a; // store address of array 
    int i = (heap_size - 1) / 2; 
    while (i >= 0) { 
        MinHeapify(i); 
        i--; 
    } 
} 
void MinHeap::MinHeapify(int i) 
{ 
    int l = left(i); 
    int r = right(i); 
    int smallest = i; 
    if (l < heap_size && harr[l].element < harr[i].element) 
        smallest = l; 
    if (r < heap_size && harr[r].element < harr[smallest].element) 
        smallest = r; 
    if (smallest != i) { 
        swap(harr[i], harr[smallest]); 
        MinHeapify(smallest); 
    } 
} 
  
void findSmallestRange(int arr[][N], int k) 
{ 
  
    int range = INT_MAX; 
    int min = INT_MAX, max = INT_MIN; 
    int start, end; 
  
    MinHeapNode* harr = new MinHeapNode[k]; 
    for (int i = 0; i < k; i++) { 
       
        harr[i].element = arr[i][0]; 
  
        harr[i].i = i; 
  
        harr[i].j = 1; 
  
        if (harr[i].element > max) 
            max = harr[i].element; 
    } 
  
    MinHeap hp(harr, k); 
  
    while (1) { 
       
        MinHeapNode root = hp.getMin(); 
  
        
        min = hp.getMin().element; 
  
        if (range > max - min + 1) { 
            range = max - min + 1; 
            start = min; 
            end = max; 
        } 
  
        if (root.j < N) { 
            root.element = arr[root.i][root.j]; 
            root.j += 1; 
  
            if (root.element > max) 
                max = root.element; 
        } 
        else
            break; 

        hp.replaceMin(root); 
    } 
  
    cout << "The smallest range is "
         << "["
         << start << " " << end << "]" << endl; 
    ; 
} 
  

int main() 
{ 
    int arr[][N] = { 
        { 4, 7, 9, 12, 15 }, 
        { 0, 8, 10, 14, 20 }, 
        { 6, 12, 16, 30, 50 } 
    }; 
    int k = sizeof(arr) / sizeof(arr[0]); 
  
    findSmallestRange(arr, k); 
  
    return 0; 
} 
