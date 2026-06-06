#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> remaining(n);
    queue<int> tasks;
    for(int i = 0; i < n; i++)
    {
        cin >> remaining[i];
        tasks.push(i);
    }
    vector<int> completionOrder;
    int turns = 0;
    while(!tasks.empty())
    {
        int task = tasks.front();
        tasks.pop();
        int run = min(remaining[task], q);
        remaining[task] -= run;
        turns++;
        if(remaining[task] == 0)
        {
            completionOrder.push_back(task + 1);
        }
        else
        {
            tasks.push(task);
        }
    }
    cout << "Completion Order: ";
    for(int x : completionOrder)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Turns: " << turns;
    return 0;
}