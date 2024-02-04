#include <iostream>

bool hasDuplicates(int nums[], int numsSize) {
    for (int i = 0; i < numsSize - 1; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            // If a duplicate is found, return true
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }

    // If no duplicates are found, return false
    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {1, 2, 3, 4, 1};

    // Check for duplicates in the arrays
    bool hasDuplicates1 = hasDuplicates(nums1, sizeof(nums1) / sizeof(nums1[0]));
    bool hasDuplicates2 = hasDuplicates(nums2, sizeof(nums2) / sizeof(nums2[0]));

    std::cout << "Array 1 has duplicates: " << std::boolalpha << hasDuplicates1 << std::endl;
    std::cout << "Array 2 has duplicates: " << std::boolalpha << hasDuplicates2 << std::endl;

    return 0;
}
