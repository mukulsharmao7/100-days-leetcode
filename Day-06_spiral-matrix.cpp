// Day 06 - Spiral Matrix Traversal
// Problem: Traverse matrix in spiral order
// Approach: Boundary traversal (top, bottom, left, right)
// Time: O(n*m)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total) {

        for(int i = startingCol; i <= endingCol && count < total; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        for(int i = startingRow; i <= endingRow && count < total; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        for(int i = endingCol; i >= startingCol && count < total; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        for(int i = endingRow; i >= startingRow && count < total; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}
