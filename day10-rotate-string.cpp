Complexity
Time: O(n)
Space: O(n)
🚀 Learning

String rotation problems can often be solved using the trick:
👉 s + s contains all rotations of s

C++ Code


class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string temp = s + s;
        return temp.find(goal) != string::npos;
    }
};
