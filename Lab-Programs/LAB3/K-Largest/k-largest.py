def k_largest_elements(arr, n, k):
    for i in range(k):
        for j in range(0, n-i-1):
            if arr[j+1] < arr[j]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr[n-k:]

n = int(input("Enter number of elements you want"))
arr = []

for i in range(n):
    x = int(input("Enter number"))
    arr.append(x)

k = int(input("Enter value of k"))

print(k_largest_elements(arr, len(arr), k))
