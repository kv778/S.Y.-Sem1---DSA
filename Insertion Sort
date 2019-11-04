#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int a[n],temp,i,j,key;
    cout<<"Enter the array elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    cout<<"Sorted array : "<<endl;

    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
