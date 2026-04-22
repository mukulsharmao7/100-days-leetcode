//⏱ Time Complexity
//O(n)

//💾 Space Complexity
//O(1)

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        maxWater = max(maxWater, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max Water: " << maxArea(height);
}
