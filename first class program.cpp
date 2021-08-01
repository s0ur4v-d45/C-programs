#include<conio.h>
#include<iostream>

class variable
{
	int x,y;
	public:
		void set(int a,int b);
		void get();
		
};
void variable::set(int a,int b)
		{
			x=a;
			y=b;
		}
void variable::get()
		{
			std::cout<<"the two values are "<<x<<" "<<y;
		}		
main()
{
	variable v1;
	int p,q;
	std::cin>>p>>q;
	v1.set(p,q);
	v1.get();
	getch();
} 
