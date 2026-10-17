
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (const char c : s) {

            if (c == '(')
                st.push(')');

            else if (c == '{')
                st.push('}');

            else if (c == '[')
                st.push(']');

            else if (st.empty() || st.top() != c)
                return false;

            else
                st.pop();
        }

        return st.empty();
    }
};
//
Input
s =
"()"
Output
true
//Short Summary 🧠
Use stack for brackets.
( → push )
{ → push }
[ → push ]
Closing bracket match करे → pop
Empty/mismatch → false
End में stack empty → true

Complexity: O(n) time, O(n) space.
