def UniqueNumbers2(arr, n):
    sums = 0
    for i in range(0, n):
        sums = (sums ^ arr[i])
    sums = (sums & -sums)
    sum1 = 0
    sum2 = 0
    for i in range(0, len(arr)):
        if (arr[i] & sums) > 0:
            sum1 = (sum1 ^ arr[i])
        else:
            sum2 = (sum2 ^ arr[i])
    print("The non-repeating elements are ",
          sum1, " and ", sum2)
if __name__ == "__main__":
 
    arr = [1,4,3,2]
    n = len(arr)
    UniqueNumbers2(arr, n)