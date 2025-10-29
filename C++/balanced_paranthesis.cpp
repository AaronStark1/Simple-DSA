#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        else if (ch==')'||ch=='}'||ch==']') {
            if (s.empty()) return false; 

            char top = s.top();
            s.pop();

            if ((ch==')' && top!='(') || (ch=='}' && top!='{') ||(ch==']' && top!='['))
                return false;
        }
    }

    return s.empty();
}

int main() {
    string expr;
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced" <<endl;
    else
        cout << "Not Balanced" <<endl;

}
