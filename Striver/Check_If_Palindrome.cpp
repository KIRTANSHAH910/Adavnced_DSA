#include <iostream>
using namespace std;
int main() {
    int n = 12321;
    int temp = n;
    int count = 0;
    while(temp > 0) {
        temp = temp / 10;
        count++;
    }
    int arr[10];
    temp = n;
    for(int i = count - 1; i >= 0; i--) {
        arr[i] = temp % 10;
        temp = temp / 10;
    }
    bool palindrome = true;
    for(int i = 0; i < count / 2; i++) {
        if(arr[i] != arr[count - 1 - i]) {
            palindrome = false;
            break;
        }
    }
    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}