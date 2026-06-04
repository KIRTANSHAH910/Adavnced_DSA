#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int C;
    cin >> C;
    int n;
    cin >> n;
    vector<int> buffer(C);
    int head = 0;
    int size = 0;
    int overwrites = 0;
    for(int i = 0; i < n; i++)
    {
        string operation;
        int eventId;
        cin >> operation >> eventId;
        int writeSlot = (head + size) % C;
        buffer[writeSlot] = eventId;
        if(size == C)
        {
            head = (head + 1) % C;
            overwrites++;
        }
        else
        {
            size++;
        }
    }
    cout << "Buffer: ";
    for(int i = 0; i < size; i++)
    {
        cout << buffer[(head + i) % C] << " ";
    }
    cout << endl;
    cout << "Overwrites: " << overwrites;
    return 0;
}