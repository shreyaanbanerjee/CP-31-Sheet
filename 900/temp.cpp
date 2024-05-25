#include <iostream>
#include <vector>

using namespace std;

bool canSort(vector<int>& arr) {
    int n = arr.size();
    int modifications = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            if (++modifications > 1) {
                return false;
            }

            if (i == 1 || arr[i] >= arr[i - 2]) {
                arr[i - 1] = arr[i];
            } else {
                arr[i] = arr[i - 1];
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Check if it's possible to sort the array
        if (canSort(arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
