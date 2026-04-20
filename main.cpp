#include <iostream>
using namespace std;
void foo() {}
void bar() {
    cout << "It’s bar!!" << endl; // 修改這行
}

int main() {
    cout << "Hello, World!" << endl;
    bar(); // 在這裡呼叫 bar
    return 0;
}