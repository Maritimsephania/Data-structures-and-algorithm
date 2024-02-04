Quiz
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.


Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Analysis.

We will be given a sorted array, for which we are supposed to scan through and check for duplicates, modify the array so that one instance of duplicate values is retained and at the end return the length of the new array.

Approach.
Knowing that the array is sorted duplicate values will be adjacent to each other hence :-
1. Check if the current and the next element are equal.
2. If they are, we will skip the next element and will continue the procedure as long as we encounter the duplicates.
3. If the elements are not duplicate, we will place the next different element next to the current element

Time Complexity
We are scanning the array once, hence the time complexity will be O(n).

Space Complexity
Since we are forbidden to use the external data structure and we are not using it, the space complexity will be O(1).