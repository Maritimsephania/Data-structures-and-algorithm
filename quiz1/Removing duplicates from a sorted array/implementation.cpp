#include <iostream>

int removeDuplicates(int nums[], int numsSize) {
    // Check if the array is empty or has only one element
    if (numsSize <= 1) {
        return numsSize;
    }

    // Initialize two pointers
    int slow = 0;
    int fast = 1;

    // Iterate through the array
    while (fast < numsSize) {
        // If the current element is equal to the previous one, skip it
        if (nums[fast] == nums[slow]) {
            fast++;
        } else {
            // If the current element is different, update the slow pointer and replace the element at slow+1
            slow++;
            nums[slow] = nums[fast];
            fast++;
        }
    }

    // The length of the unique elements is given by slow + 1
    return slow + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Get the new length after removing duplicates
    int newLength = removeDuplicates(nums, numsSize);

    // Output the new array and its length
    std::cout << "New array: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\nNew length: " << newLength << std::endl;

    return 0;
}

