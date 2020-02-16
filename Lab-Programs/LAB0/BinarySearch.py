def binarySearch(arr, low, high, x): 
    while (low <= high): 
        mid = int((low + high) / 2) 
          
        if (arr[mid] == x): 
            return mid 
        elif(arr[mid] > x): 
            high = mid - 1
        else: 
            low = mid + 1
 
def isKSortedArray(arr, n, k): 
      

    aux = [0 for i in range(n)] 
    
    for i in range(0, n, 1): 
        aux[i] = arr[i] 
      

    aux.sort(reverse = False) 
      

    for i in range(0, n, 1): 
          

        j = binarySearch(aux, 0, n - 1, arr[i]) 

        if (abs(i - j) > k): 
            return "No"
      

    return "Yes"
  

if __name__ == '__main__': 
    arr = [3, 2, 1, 5, 6, 4] 
    n = len(arr) 
    k = 2
    print("Is it a k sorted array?:",  
           isKSortedArray(arr, n, k)) 
