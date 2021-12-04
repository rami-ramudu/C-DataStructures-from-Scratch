#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int start=0,end=n-1;
    cout<<"Before reversing\n";
    for(int x:arr) cout<<x<<" ";
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
    cout<<"After reversing\n";
    for(int x:arr) cout<<x<<" ";
    return 0;
}
