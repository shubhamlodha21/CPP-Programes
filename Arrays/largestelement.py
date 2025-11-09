#Given an array of integers nums, return the value of the largest element in the array

# Input: 
# nums = [3, 3, 6, 1]
# Output: 6

# nums = [-4, -3, 0, 1, -8]
# Output : 1

# nums = [3, 1, 2]
# Output = 3

# nums = [-4, -3, 0, 1, -8,2]
# for i in range (len(nums)):
#     for j in range (len(nums)):
#         if (nums[i]>nums[j]):
#             ans = nums[i]
# print(ans)

nums = [3, 1, 2]
for i in range (len(nums)):
    ans = nums[0]
    if ans > nums[i]:
        ans = nums[i]
print(ans)


nums = [1,5,0,-9,2]
print(max(nums))
