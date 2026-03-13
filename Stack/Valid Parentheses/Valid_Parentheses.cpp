#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string str) {

        if(str.size() % 2 != 0) return false;
        
        std::stack<char> s;

        for(char ch : str){
            if(s.size() > 0 && s.top() == '{' && ch == '}') s.pop();
            else if(s.size() > 0 && s.top() == '(' && ch == ')') s.pop();
            else if(s.size() > 0 && s.top() == '[' && ch == ']') s.pop();
            else s.push(ch);
        }

        return s.size() == 0;
    }
};

void checkResult(std::string s, bool result) {
    std::cout << "Input: \"" << s << "\" -> " << (result ? "Valid" : "Invalid") << std::endl;
}

int main() {
    Solution sol;

    std::string s1 = "()";
    std::string s2 = "()[]{}";
    std::string s3 = "(]";
    std::string s4 = "([)]";
    std::string s5 = "{[]}";

    checkResult(s1, sol.isValid(s1)); 
    checkResult(s2, sol.isValid(s2)); 
    checkResult(s3, sol.isValid(s3)); 
    checkResult(s4, sol.isValid(s4)); 
    checkResult(s5, sol.isValid(s5)); 

    return 0;
}
