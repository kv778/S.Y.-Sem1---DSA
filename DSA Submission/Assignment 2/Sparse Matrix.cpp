#include<iostream>

using namespace std;

int main()
{
    int a[10][10],sp[10][10];
    int r,c,ctr1=0,ctr2=1;
    cout<<"Enter rows : ";
    cin>>r;
    cout<<"Enter columns : ";
    cin>>c;
    cout<<endl<<"Enter the matrix elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                ctr1++;
        }
    }
    cout<<endl<<"Entered matrix : "<<endl<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<"    ";
        cout<<endl;
    }

    sp[0][0]=r;
    sp[0][1]=c;
    sp[0][2]=ctr1;

    for(int i=0;i<=ctr1;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
                sp[ctr2][0]=i;
                sp[ctr2][1]=j;
                sp[ctr2][2]=a[i][j];
                ctr2++;
            }
        }
    }

    cout<<endl<<"Sparse matrix : "<<endl<<endl;
    for(int i=0;i<=ctr1;i++)
    {
        for(int j=0;j<3;j++)
            cout<<sp[i][j]<<"   ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
