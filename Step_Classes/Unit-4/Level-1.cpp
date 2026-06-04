#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    stack<int> inbox;
    stack<int> outbox;
    vector<int> served;
    for(int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if(op == "ENQUEUE") {
            int id;
            cin >> id;
            inbox.push(id);
        }
        else {
            if(outbox.empty()) {
                while(!inbox.empty()) {
                    outbox.push(inbox.top());
                    inbox.pop();
                }
            }

            if(!outbox.empty()) {
                served.push_back(outbox.top());
                outbox.pop();
            }
        }
    }
    int pending = inbox.size() + outbox.size();
    cout << "Served: ";
    for(int x : served)
        cout << x << " ";
    cout << "\nPending: " << pending;
    return 0;
}

/*I used two stack approach inbox where the 
new element are pushed and outbox where poped
we are performing FIFO Using LIFO in two stacks*/