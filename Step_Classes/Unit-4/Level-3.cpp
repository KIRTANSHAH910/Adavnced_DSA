#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Window Maxima: ";
    for(int i = 0; i <= n - k; i++) {
        int maximum = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > maximum) {
                maximum = arr[j];
            }
        }
        cout << maximum << " ";
    }
    return 0;
}