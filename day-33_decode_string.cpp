class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> result;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                counts.push(num);
                result.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                string temp = curr;
                curr = result.top();
                result.pop();

                int repeat = counts.top();
                counts.pop();

                while (repeat--) {
                    curr += temp;
                }
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};
