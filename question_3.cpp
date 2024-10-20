//arr[] = {-8, 2, 3, -6, 10}, k = 2
#include <stack>
#include <iostream>
#include <queue>
using namespace std;
int FNI(int arr[],int index,int k)
{
    queue < int > q;
    for (int i = index ; i <index + k ; i++)
    {
        q.push(arr[i]);
    }
    while (true)
    {
        if(q.empty()) return 0;
        if(q.front() < 0 ) return q.front();
        q.pop();
    }
    
    
}
int main()
{
    const int L = 5;
    int arr[L] = {-8, 2, 3, -6, 10};
    const int k = 2;
    //5-2+1
    for (int i = 0; i <= L-k; i++)
    {
        cout<<FNI(arr,i,k)<<' ';
    }
    
}