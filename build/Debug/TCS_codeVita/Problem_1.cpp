#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwapsToMakeBeautiful(const std::vector<int>& arr) {
    int n = arr.size();
    int ascCount = 0, descCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            ascCount++;
        } else if (arr[i] > arr[i + 1]) {
            descCount++;
        }
    }
    return n - 1 - max(ascCount, descCount);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = minSwapsToMakeBeautiful(arr);
    cout<< result << std::endl;
    return 0;
}
