#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(vector<int> &arr) {
    // Loop through the vector
    for (int i = 0; i < arr.size() - 1; ) {
        // If the current element is equal to the next one
        if (arr[i] == arr[i + 1]) {
            // Remove the next element
            arr.erase(arr.begin() + i + 1);
        } else {
            // Only move to the next element if no deletion was made
            i++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 4, 4, 5, 5};
    
    // Print the original array
    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    
    // Remove duplicates
    remove_duplicates(arr);
    
    // Print the modified array
    cout << "Array after removing duplicates: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
