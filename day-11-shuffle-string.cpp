// Time Complexity

//O(n)

// Space Complexity

// O(n)

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result = s; // same size
        
        for(int i = 0; i < s.length(); i++) {
            result[indices[i]] = s[i];
        }
        
        return result;
    }
};
