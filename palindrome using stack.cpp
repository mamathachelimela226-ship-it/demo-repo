#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num, original, remainder;
    stack<int> s;

    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while (num > 0) {
        remainder = num % 10;
        s.push(remainder);
        num = num / 10;
    }

    int reversed = 0;
    while (!s.empty()) {
        reversed = reversed * 10 + s.top();
        s.pop();
    }
    if (original == reversed) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not palindrome number" << endl;
    }

    return 0;
}
