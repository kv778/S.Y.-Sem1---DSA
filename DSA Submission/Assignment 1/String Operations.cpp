#include<iostream>
#include<string>
using namespace std;





void length()

{
    char str1[20];

	cout<<"Enter the string 1 : ";
	cin>>str1;

	char *ptr1;
	ptr1=str1;

    int i;
	for(i=0;*ptr1!='\0';i++,ptr1++);

	cout<<"Length of string 1 = "<<i<<endl<<"\n";


}


void compare()
{

    char str1[20];
	char str2[20];
	cout<<"Enter the string 1 : ";
	cin>>str1;


	cout<<"Enter the string 2 : ";
	cin>>str2;



	char *ptr1;
	ptr1=str1;

    int i,j;
	for(i=0;*ptr1!='\0';i++,ptr1++);

	cout<<"Length of string 1 = "<<i<<endl<<"\n";


	char *ptr2;
	ptr2=str2;


	for(j=0;*ptr2!='\0';j++,ptr2++);

	cout<<"Length of string 2 = "<<j<<endl<<"\n";


	if(i==j)
	{

		ptr1=str1;
		ptr2=str2;
		int k=0;
		while(*ptr1==*ptr2)
		{
			if(*ptr1!='\0')
			{

				k++;
			}

			ptr1++;
			ptr2++;
		}
		cout<<"K="<<k<<endl<<"\n";


		if(k==i)
		{	cout<<"Both strings are identical"<<endl<<"\n";}

		else
		{	cout<<"Strings are different"<<endl<<"\n";	}

	}

	else
	{	cout<<"Strings are different"<<endl<<"\n";	}





}



void concat()
{

    char str1[20];
	char str2[20];
	cout<<"Enter the string 1 : ";
	cin>>str1;


	cout<<"Enter the string 2 : ";
	cin>>str2;



	char *ptr1;
	ptr1=str1;

	int i=0;

	for(i=0;*ptr1!='\0';i++,ptr1++);

	char *ptr2;
	ptr2=str2;
	int j;

	for(j=0;*ptr2!='\0';j++,ptr2++,ptr1++)
	{	*ptr1=*ptr2;	}

	*ptr1='\0';

	cout<<"Concatenated strings : "<<str1<<endl;





}






void Copy()
{

    char str1[20];
	char str2[20];
	cout<<"Enter the string 1 : ";
	cin>>str1;





	char *ptr1;
	ptr1=str1;

	char *ptr2;
	ptr2=str2;

	int i=0;

	for(i=0;*ptr1!='\0';i++,ptr1++,ptr2++)
	{	*ptr2=*ptr1;	}


	*ptr2='\0';



	cout<<"Copied strings : "<<str2<<endl;



}




void rev()
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
	for(j=0;j<=k;j++,i--)
	{	str2[j]=str1[i];

	}

	str2[j]='\0';




	cout<<"Reversed strings : "<<str2<<endl;


}








int main()
{
	int choice;

	cout<<"Please select your choice\n\n1. Length\n\n2. Compare\n\n3. Concat\n\n4. Copy\n\n5. Reverse\n"<<endl;
	cin>>choice;

	switch(choice)
	{

		case 1: length();
				break;

		case 2: compare();
			    break;

		case 3: concat();
			    break;

		case 4: Copy();
			    break;

		case 5: rev();
			    break;


	}

	int i;
	cout<<"Do you want to perform more operations?\n\n1. YES\n\n2.NO\n"<<endl;
	cin>>i;

	if(i==1)
	{	main();	}

	else
	{	cout<<"Thank You\n";	}

}
