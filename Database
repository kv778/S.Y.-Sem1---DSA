#include<iostream>
#include<string>

using namespace std;

class Database
{
	public:
	int n;
	typedef struct student
	{
		int roll;
		string name,address;
	}s1;
	s1 s[10];

	void get_data()
	{
		cout<<"Enter the number of records : ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin.ignore();
			cout<<"Enter the roll no : ";
			cin>>s[i].roll;
			cout<<"Enter the name : ";
			cin>>s[i].name;
			cout<<"Enter address : ";
			cin>>s[i].address;
			cout<<endl<<endl;
		}
	}
	
	void put_data()
	{
		for(int i=1;i<=n;i++)
		{
			cout<<"Student "<<i<<" : "<<endl;
			cout<<"Roll No : "<<s[i-1].roll<<endl;
			cout<<"Name : "<<s[i-1].name<<endl;
			cout<<"Address : "<<s[i-1].address<<endl;
			cout<<endl<<endl;
		}
	}
	
	void sort()
	{
		int temp;
		string temp1,temp2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<(n-i-1);j++)
			{
				if(s[j].roll>s[j+1].roll)
				{
					temp=s[j].roll;
					s[j].roll=s[j+1].roll;
					s[j+1].roll=temp;
					
					temp1=s[j].name;
					s[j].name=s[j+1].name;
					s[j+1].name=temp1;
					
					temp2=s[j].address;
					s[j].address=s[j+1].address;
					s[j+1].address=temp2;
					
					temp=0;
					temp1="";
					temp2="";
				}
			}
		}
	}
	
	void search()
	{
		int no,flag=0;
		char ch='y';
		
		while(ch!='n')
		{
			cout<<endl<<"Enter the roll no to be searched : ";
			cin>>no;
			for(int i=0;i<n;i++)
			{
				if(s[i].roll==no)
				{
					cout<<"Roll no "<<no<<" found at position "<<(i+1);
					cout<<endl<<"Name : "<<s[i].name<<endl;
					cout<<"Address : "<<s[i].address<<endl<<endl;
					++flag;
					ch='n';
				}
			}
			if(flag==0)
			{
				cout<<"Roll no not found!"<<endl;
				cout<<"Do you want to search again? y/n : ";
				cin>>ch;			
			}
		}	
	}
			
						
};

int main()
{
	int choice;
	Database obj;
	obj.get_data();
	cout<<endl<<"Entered data : "<<endl;
	obj.put_data();
	cout<<"Enter the choice : 1.Sorted Data		2.Search a Roll No"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<endl<<"Sorted data : "<<endl;
		 	  	 obj.sort();
				 obj.put_data();
				 break;
		case 2 : obj.search();
				 break;
				 		 
		default : cout<<"Invalid Choice!"<<endl;
	}
	return 0;
}
	
