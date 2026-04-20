#include <iostream>
using namespace std;
void foo() {
    cout << "It’s foo!!" << endl; // 修改這裡
}
void bar() {}
int main() {
    cout << "Hello, World!" << endl;
    foo(); // 呼叫 foo
    return 0;
}