// Day 3 - LeetCode 344: Reverse String
// Approach: Two Pointers
// Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size() - 1;

        while(st < e) {
            swap(s[st++], s[e--]);
        }
    }
};

int main() {
    vector<char> s = {'h','e','l','l','o'};

    Solution obj;
    obj.reverseString(s);

    for(char c : s) cout << c << " ";
}
