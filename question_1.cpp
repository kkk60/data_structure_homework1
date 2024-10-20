#include <stack>
#include <iostream>
#include <queue>
using namespace std;
void Reverse(stack <int> st)
{
    queue <int> q;
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    
    while (!q.empty())
    {
        st.push(q.front());
        
        q.pop();
    }
    
}
int main()
{
    stack <int> st;
    for (int i =31; i >= 28; i--)
    {
        st.push(i);
    }
    
    Reverse(st);

    while(!st.empty())
    {
        cout<<st.top()<<' ';
        st.pop();
    }
    
    
    

    

    
    

    
    return 0;
}
