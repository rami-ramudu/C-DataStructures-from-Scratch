#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"Enter the operand 1:";
	cin>>a;
	cout<<"Enter the operand 2:";
	cin>>b;
	cout<<"Enter the operator:";
	cin>>op;
	if(op=='+') cout<<a+b<<" ";
	else if(op=='-') cout<<a-b<<" ";
	else if(op=='*') cout<<a*b<<" ";
	else if(op=='/') cout<<a/b<<" ";
	else cout<<"Enter a valid character";
	return 0;
}
