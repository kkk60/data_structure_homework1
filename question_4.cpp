#include <stack>
#include <iostream>
#include <queue>
using namespace std;
void interleaving (queue <int> q)
{
    int size = q.size();
    int halfSize = q.size()/2;
    queue <int> q1;
    queue <int> q2;
    for (size_t i = 0; i < halfSize; i++)
    {
        q1.push(q.front());
        q.pop();
    }
    for (size_t i = halfSize; i < size; i++)
    {
        q2.push(q.front());
        q.pop();
    }
    for (size_t i = 0; i < size; i++)
    {
        if(i % 2)
        {
            q.push(q2.front());
            q2.pop();
        }
        else
        {
            q.push(q1.front());
            q1.pop();
        }
    }
    while(!q.empty())
    {
        cout<<q.front()<<' ';
        q.pop();
    }
    
    
    
}
int main()
{
    queue <int> q;
    for (int i = 1 ; i <= 8 ; i++)
    {
        q.push(i);
    }
    interleaving (q);
   
}