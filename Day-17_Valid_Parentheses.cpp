// Complexity
// - Time: O(n)
// - Space: O(n)


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            // opening brackets push karo
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // agar stack empty hai → invalid
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                // check matching
                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // agar stack empty → valid
        return st.empty();
    }
};
