#include <iostream>
using namespace std;
void foo() {
    cout << "It’s foo!!" << endl;
}
void bar() {
    cout << "It’s bar!!" << endl;
}
int main() {
    cout << "Hello, World!" << endl;
    bar(); // 保留你的 bar
    foo(); // 也保留 User A 的 foo
    return 0;
}