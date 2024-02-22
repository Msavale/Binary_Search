def upper_bound(arr, x):
    low = 0
    high = len(arr) - 1
    mid = -1

    while low <= high:

        mid = (high + low) // 2

        # If x is greater, ignore left half
        if arr[mid] <= x:
            low = mid + 1

        # If x is smaller, ignore right half
        else:
            high = mid - 1

    # If x is greater than all elements
    if low > high:
        return len(arr)

    # If x is smaller than all elements
    if high < 0:
        return 0

    # mid is the upper bound
    return mid

# Test the upper_bound function
arr = [1, 3, 5, 7, 9]
x = 5

# Find the upper bound of x in arr
index = upper_bound(arr, x)

print("The upper bound of", x, "is", index)