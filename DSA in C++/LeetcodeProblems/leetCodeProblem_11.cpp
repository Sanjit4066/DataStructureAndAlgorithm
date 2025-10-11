/*Leetcode problem 11 container with most water by two pointers approach*/
#include <iostream>
#include <vector>
#include <algorithm>

int maxArea(std::vector<int>& height) {
    int max_area = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int h = std::min(height[left], height[right]); // find the minimum between both the heights 
        int current_area = h * width;
        max_area = std::max(max_area, current_area); // update max area with current area if it is maximum

        if (height[left] < height[right]) {   // we don't need to move the right container if it is already taller so we'll move left container only.
            left++;  
        } else {                              // we'll move right container only if it's not taller
            right--;
        }
    }
    return max_area; // return answer maximum area so it will show maximum volume of water
}

int main() {
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7,9};
    int result = maxArea(height);  // calling function
    std::cout << "The maximum area is: " << result << std::endl; 
    return 0;
}

