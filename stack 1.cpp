#include <iostream>
using namespace std;

#define MAX 100

class StackInterface {
public:
    virtual void push(int x) = 0;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public StackInterface {
private:
    int arr[MAX];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int x) override {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
    }

    void pop() override {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    int top() override {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() override {
        return (topIndex < 0);
    }

    bool isFull() override {
        return (topIndex >= MAX - 1);
    }
};

int main() {
    Stack s;

    s.push(25);
    s.push(10);
    s.push(65);

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;

    return 0;
}
