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
/*Here we have Index as Days like 0, 1, 2, ...
  and demand correspondingly so simply we need
  to find the next greater element for each day 
  and the first place where we finf that higher demand
  we will mark the day index will subtract previous one's day index
  from it.*/