#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> demand(n);
    for(int i = 0; i < n; i++)
    {
        cin >> demand[i];
    }
    vector<int> ans(n, 0);
    stack<int> st;
    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && demand[i] > demand[st.top()])
        {
            ans[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    cout << "Days To Higher: ";
    for(int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}