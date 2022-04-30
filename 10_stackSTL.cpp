#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(7);
    s.push(3);
    s.push(1);
    s.push(2);
    s.pop();
    s.push(6);
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}