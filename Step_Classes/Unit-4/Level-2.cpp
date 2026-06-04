#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<int> data;
    stack<int> mins;
    vector<int> answers;
    for(int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if(op == "PUSH") {
            int x;
            cin >> x;
            data.push(x);
            if(mins.empty())
                mins.push(x);
            else
                mins.push(min(x, mins.top()));
        }
        else if(op == "POP") {
            if(!data.empty()) {
                data.pop();
                mins.pop();
            }
        }
        else if(op == "MIN") {
            if(data.empty())
                answers.push_back(-1);
            else
                answers.push_back(mins.top());
        }
    }
    for(int x : answers) {
        if(x == -1)
            cout << "Min: EMPTY\n";
        else
            cout << "Min: " << x << "\n";
    }
    cout << "Size: " << data.size();
    return 0;
}

/*If we create one stack then to find the min
we need to search whole stack each time instead
we created 2 two stacks one is min and one is actual updating
So at last after poping the element will able to see exactly 
the size and min element as an output.*/