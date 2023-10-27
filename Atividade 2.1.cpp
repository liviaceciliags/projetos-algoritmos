#include <iostream>
#include <vector>
using namespace std;

string find_element(vector<int> arr) {
    int n = arr.size();
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];
        if (left_sum == right_sum) {
            return "YES";
        }
        left_sum += arr[i];
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << find_element(arr) << endl;
    }
    return 0;
}
