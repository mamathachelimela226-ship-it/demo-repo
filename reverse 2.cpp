#include <iostream>
#include <vector>
using namespace std;

class VectorOperations {
public:
    void reverseVector(vector<int>& vec) {
        int start = 0;
        int end = vec.size() - 1;

        while (start < end) {
            int temp = vec[start];
            vec[start] = vec[end];
            vec[end] = temp;

            start++;
            end--;
        }
    }

    void display(vector<int>& vec) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> myVec = {15, 24, 33, 42, 51};

    VectorOperations obj;

    cout << "Original Vector: ";
    obj.display(myVec);

    obj.reverseVector(myVec);

    cout << "Reversed Vector: ";
    obj.display(myVec);

    return 0;
}
