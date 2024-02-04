quiz
Given an array, rotate the array to the right by k steps, where k is non-negative


Analysis

The elements of the array are shifted to the right by k number of positions in right rotation, and the elements that "fall off" the right end of the array are added to the left end of the array.


Approach

Determine the number of effective rotations k = d mod n, where n is the length of the array. This is due to the fact that d rotations are equivalent to k rotations if d is greater than or equal to n.
Reverse the first n-k elements of the array.
Reverse the last k array elements.
Turn the entire array around.