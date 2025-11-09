# Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

arr = [1,3,5,8,9,-1]
flag = 1

# for i in range(len(arr)):
#     for j in range(i+1,len(arr)):
#         if(arr[i]>arr[j]):
#             flag = 0
#         break

# if (flag):
#     print("YES")
# else:
#     print("NO")


for i in range(1, len(arr)):
    if(arr[i]<arr[i-1]):
        flag=0

if (flag):
    print("YES")
else:
    print("NO")