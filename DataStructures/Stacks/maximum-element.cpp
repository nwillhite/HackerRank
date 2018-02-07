//https://www.hackerrank.com/challenges/maximum-element/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> maxStack;
    int count = 0, command = 0, value = 0;
    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> command;
        if (command == 1) {
            cin >> value;
            if(maxStack.empty())
                maxStack.push(value);
            else
                maxStack.push(max(value, maxStack.top()));
            value = 0;
        }
        else if (command == 2) {
            if (!maxStack.empty())
                maxStack.pop();
        }
        else if (command == 3) {
            cout << maxStack.top() << endl;
        }
    }

    return 0;
}
