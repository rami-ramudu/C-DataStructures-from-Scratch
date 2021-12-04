//largest subarray sum brute force
//O(N^3) time
//O(1) space
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,-50,-60};
    int n=6;
    int largesum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int curr_sum=0;
            for(int k=i;k<=j;k++)
            {
                curr_sum+=arr[k];
            }
            largesum=max(largesum,curr_sum);
            
        }
 
    }
    cout<<"The maximum subarray sum is "<<largesum<<"\n";
    return 0;
}
