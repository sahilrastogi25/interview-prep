class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '(' or x[i] == '{' or x[i] == '[') {
                s.push(x[i]);
                continue;
            }
            if (s.empty()) {
                return false;
            }
            char ch;
            switch (x[i]) {
            case '}':
                ch = s.top();
                s.pop();
                if (ch != '{') {
                    return false;
                }
                break;
            case ')':
                ch = s.top();
                s.pop();
                if (ch != '(') {
                    return false;
                }
                break;
            case ']':
                ch = s.top();
                s.pop();
                if (ch != '[') {
                    return false;
                }
                break;
            }
        }
        return s.empty();
    }

};