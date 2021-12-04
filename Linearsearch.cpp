#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int search=60;
    int search1=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search1)
        {
           cout<<"element found at index "<<i<<" ";
           return 0;
        }
    }
    cout<<"element "<<search1<<" not found";
    return 0;
}
