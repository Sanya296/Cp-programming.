#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x,r=0,b;
	cout<<"\n\t Enter any no\t";
	cin>>n;
	x=n;
	while(n!=0)
	{
		b=n%10;
		r=r*10+b;
		n=n/10;
	}
	if(r==x)
	{
	cout<<"\n\t Pallindrome no";
	}
	else
	{
		cout<<"\n\t Not pallindrome no";
	}
	getch();
}// end of main