# Day 9 - Rotate Image

## Problem
Given an n x n matrix, rotate the image by 90 degrees clockwise in-place.

## Approach
Used efficient in-place method:

1. Transpose the matrix
2. Reverse each row

## Time Complexity
O(n²)

## Space Complexity
O(1)

## C++ Solution

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
