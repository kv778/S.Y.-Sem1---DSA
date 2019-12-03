#include<iostream>

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}




int partition(int array[],int p,int r)
{
    int i=p-1;
    int x=array[r];
    for(int j=p;j<=r-1;j++)
    {
        if(array[j]<x)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[r]);
    return (i+1);
}



void quicksort(int array[],int p,int r,int n)
{

    if(p<r)
    {
        int q=partition(array,p,r);
         for(int i=0;i<n;i++)
    {
        std::cout<<array[i]<<"\t";
    }
    	std::cout<<"\n";
        quicksort(array,p,q-1,n);

        quicksort(array,q+1,r,n);

    }

}


int main()
{
    using namespace std;
    int n,start,end;
    cout<<"Enter no of elements: ";
    cin>>n;
    int array[100];
    cout<<"\nEnter elements: \n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"\nElements before sorting:\n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }
	std::cout<<"\n";
    start=0;
    end=n-1;
    quicksort(array,start,end,n);
        std::cout<<"\nElements after sorting:\n";
    for(int i=0;i<n;i++)
    {
        std::cout<<array[i]<<"\t";
    }


    return 0;

}
