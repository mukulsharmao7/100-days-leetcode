// Day 5 - LeetCode 1910: Remove All Occurrences of a Substring
// Approach: Keep finding & erasing substring
// Time Complexity: O(n^2) (due to repeated find + erase)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    Solution obj;
    cout << obj.removeOccurrences(s, part);
}
