#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int search=60;
    int search1=-1;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+((end-start)>>1);
        if(arr[mid]==search1)
        {
            cout<<"Element is found at index "<<mid<<"\n";
            return 0;
        }
        else if(arr[mid]<search) start=mid+1;
        else end=mid-1;
    }
    cout<<"Element not found in array\n";
    return 0;
}
