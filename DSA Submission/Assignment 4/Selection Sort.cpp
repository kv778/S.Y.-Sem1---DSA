#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int a[n],temp=0,min_index=0;
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    cout<<"Sorted array : "<<endl;

    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
