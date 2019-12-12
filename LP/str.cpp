#include<iostream>

using namespace std;

int main()
{
    char str1[20];
	char str2[20];
	cout<<"Enter the string 1 : ";
	cin>>str1;

	char *ptr1;
	ptr1=str1;

	char *ptr2;
	ptr2=str2;

	int i,j,k;

	for(i=0;*ptr1!='\0';i++,ptr1++);
	cout<<i<<endl;
	k=i-1;
	i--;
	for(j=0;j<=k;j++,ptr2++,ptr1++)
	{
        *ptr2=*ptr1;
	}

	cout<<"Reversed strings : "<<str2<<endl;
    return 0;
}
