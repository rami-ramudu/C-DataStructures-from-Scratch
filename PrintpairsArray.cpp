#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<"("<<arr[i]<<" "<<arr[j]<<"),";
        }
        cout<<"\n";
    }
    return 0;
}
