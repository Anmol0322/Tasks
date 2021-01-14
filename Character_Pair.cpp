#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,j;
	string s;
	cout<<"Enter sting: ";
	cin>>s;
	for(i=0;i<=s.length();i++)
		for(j=i+1;j<=s.length();j++)
			if(s[i]==s[j])
			{
				cout<<"The repeating element: ";
				cout<<s[i]<<endl;
				exit(0);
			}
	return 0;
}
