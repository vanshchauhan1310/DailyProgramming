#include<iostream>
using namespace std;


int Rbinsearch(int low, int high, int key, int arr[]) {
    
    if (low <= high) {
        int mid = low + (high - low) / 2; 

            if (arr[mid] == key) {
            cout << "Key is Found at index " << mid << endl;
            return mid;
        }

            if (arr[mid] > key) {
            return Rbinsearch(low, mid - 1, key, arr);
        }

            return Rbinsearch(mid + 1, high, key, arr);
    }
return -1;
}

int main() {
    int n;
    int key;

    cout << "Enter the size of Array: ";
    cin >> n;

    cout << "Enter the Array:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter The Key: ";
    cin >> key;

    // Call the recursive binary search function
    Rbinsearch(0, n - 1, key, arr);

    return 0;
}

