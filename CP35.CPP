#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=2,b;
	while(a<=20)
	{
		b=1;
		while(b<=10)
		{
			cout<<" "<<a*b;
			b++;
		}
		cout<<"\n";
		a++;
	}
	getch();
}//end of main