#include <iostream>
using namespace std;

int main()
{
    int n,key;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter sorted elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    int low=0,high=n-1,mid;
    int found=-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        {
            found=mid;
            break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    if(found==-1)
        cout<<"\nElement Not Found";
    else
        cout<<"\nElement Found at Index "<<found;

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case    : O(1)";
    cout<<"\nAverage Case : O(log n)";
    cout<<"\nWorst Case   : O(log n)";

    return 0;
}