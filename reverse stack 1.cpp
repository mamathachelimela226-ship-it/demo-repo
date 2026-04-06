#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverseVector(vector<int>& vec) {
    stack<int> st;
    for (int i = 0; i < vec.size(); i++) {
        st.push(vec[i]);
    }
    for (int i = 0; i < vec.size(); i++) {
        vec[i] = st.top();
        st.pop();
    }
}

int main() {
    vector<int> myVec = {91, 82, 73, 64, 55 ,46};

    cout << "Original Vector: ";
    for (int val : myVec) {
        cout << val << " ";
    }
    cout << endl;

    reverseVector(myVec);

    cout << "Reversed Vector: ";
    for (int val : myVec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
