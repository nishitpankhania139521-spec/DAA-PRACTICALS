#include <iostream>
using namespace std;

int main()
{
    int n,key;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    int pos=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
        cout<<"\nElement Not Found";
    else
        cout<<"\nElement Found at Index "<<pos;

    cout<<"\n\nTime Complexity:";
    cout<<"\nBest Case    : O(1)";
    cout<<"\nAverage Case : O(n)";
    cout<<"\nWorst Case   : O(n)";

    return 0;
}