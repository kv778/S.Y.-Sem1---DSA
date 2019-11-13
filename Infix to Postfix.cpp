#include<iostream>
#include<string.h>
using namespace std;

bool isOperator(char input) 
{ 
    switch (input) 
    { 
		case '+':
			return 1;
		case '=':
			return 1;
		case '/':
			return 1;
		case '*':
			return 1;
		case '(':
			return 1;			    
    return 0; 
	}
}

bool isOperand(char c)
{
	if(c>='A' && c<='Z')
		return true;
	else if(c>='a' && c<='z')
		return true;
	else if(c>='0' && c<='9')
		return true;
	else
		return false;
}

int inPre(char input) 
{ 
    switch (input) { 
    case '+': 
    case '-': 
        return 2; 
    case '*': 
    case '%': 
    case '/': 
        return 4; 
    case '^': 
        return 5; 
    case '(': 
        return 0; 
    } 
} 
  
int outPre(char input) 
{ 
    switch (input) { 
    case '+': 
    case '-': 
        return 1; 
    case '*': 
    case '%': 
    case '/': 
        return 3; 
    case '^': 
        return 6; 
    case '(': 
        return 100; 
    } 
}  

void convert(char* I)
{
	stack<char> s;
	int i=0;
	while(I[i]!='\0')
	{
		if(isOperand(I[i]))
			cout<<I[i];
		else if(isOperator(I[i]))
		{
			if(s.empty() || outPre(I[i])>inPre(s.top()))
				s.push(I[i]);
			else
			{
				while(!s.empty() && outPre(I[i])<inPre(s.top()))
				{
					cout<<s.top();
					s.pop();
				}
				s.push(I[i]);
			}
		}
		
		else if(I[i]=='(')
		{
			while(s.top()!='(')
			{
				cout<<s.top();
				s.pop();
				
				if(s.empty())
				{
					cout<<"Wrong input!"<<endl;
					exit(1);
				}
			}
			s.pop();
		}
		i++;
	}
	
	while(!s.empty())
	{
		if(s.top=='(')
		{
			cout<<"Wrong input!"<<endl;
			exit(1);
		}
		cout<<s.top();
		s.pop();
	}
}	
							
int main()
{
	char I[20],P[20];
	I[20]="a+b*c-(d/e+f^g^h)";
	char ch;
	do
	{
		 convert(I);
		 cout<<endl<<"Do you want to continue? Y/N :  ";
		 cin>>ch;
	}
	while(ch!='N' || ch!='n');
	
	return 0;
} 

