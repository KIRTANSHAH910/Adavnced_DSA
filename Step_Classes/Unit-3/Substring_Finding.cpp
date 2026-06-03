#include <iostream>
#include <string>
using namespace std;
int main() {
    string text = "abababc";
    string pattern = "ababc";
    if(text.find(pattern) != string::npos) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}