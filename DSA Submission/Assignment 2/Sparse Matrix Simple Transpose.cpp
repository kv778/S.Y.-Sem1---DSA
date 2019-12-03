#include <iostream>

using namespace std;

int main()
{
    int r,c,ctr=0,ctr1=1,ctr2=1;
    cout<<"Enter the no of columns : ";
    cin>>c;
    cout<<"Enter the no of rows : ";
    cin>>r;
    int a[r][c];
    cout<<endl<<"Enter the matrix elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
                ctr++;
        }
    }

    cout<<endl<<"Entered matrix : "<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<"    ";
        cout<<endl;
    }

    int sp[ctr][3],spt[ctr][3];
    sp[0][0]=r;
    sp[0][1]=c;
    sp[0][2]=ctr;

    spt[0][0]=r;
    spt[0][1]=c;
    spt[0][2]=ctr;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                sp[ctr1][0]=i;
                sp[ctr1][1]=j;
                sp[ctr1][2]=a[i][j];
                ctr1++;
            }
        }
    }

    cout<<endl<<"Sparse matrix : "<<endl;

    for(int i=0;i<ctr1;i++)
    {
        for(int j=0;j<3;j++)
            cout<<sp[i][j]<<"   ";
        cout<<endl;
    }

    cout<<"Transpose of the matrix : "<<endl;

    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<ctr1;j++)
        {
            if(sp[j][2]==i)
            {
                spt[ctr2][0]=sp[ctr2][1];
                spt[ctr2][1]=sp[ctr2][0];
                spt[ctr2][2]=sp[ctr2][2];
                ctr2++;
            }
        }
    }

    for(int i=0;i<ctr1;i++)
    {
        for(int j=0;j<3;j++)
            cout<<spt[i][j]<<"  ";
        cout<<endl;
    }

    return 0;
}
