//https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char> stk;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') {
            stk.push(s[i]);
        }
        else if(s[i] == '}') {
            if(stk.empty() || stk.top() != '{') {
                return "NO";
            }
            stk.pop();
        }
        else if(s[i] == ']') {
            if(stk.empty() || stk.top() != '[') {
                return "NO";
            }
            stk.pop();
        }
        else if(s[i] == ')') {
            if(stk.empty() || stk.top() != '(') {
                return "NO";
            }
            stk.pop();
        }

    }

    return stk.empty() ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
