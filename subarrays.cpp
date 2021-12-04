#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        
        }
        cout<<endl;
    }
}
