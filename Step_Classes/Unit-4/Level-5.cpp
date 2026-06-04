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
/*We have a circular buffer of capacity c in which we are going to
  add the elements we also have head, size and overwrites head will
  update it's value once the buffer is full and then for each new value
  head value will increase similarly size will mention the current 
  correct value in buffer once size = C buffer is full it will start
  overwriting the oldest elements.*/