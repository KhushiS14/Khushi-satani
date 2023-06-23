#include<iostream>
using namespace std;

class bigmall
{
	public:
		int panipuri;
		int burger;
		int dosa;
		int icecream;
};
int main()
{
	bigmall s[2];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter  panipuri: ";
		cin>>s[i].panipuri;
		cout<<"enter burger : ";
		cin>>s[i].burger;
		cout<<"enter dosa : ";
		cin>>s[i].dosa;
		cout<<"enter icecream : ";
		cin>>s[i].icecream;
	}
	
	cout<<"\n\n----------------------------------\n\n";
	
	for(i=0;i<2;i++)
	{
		cout<<"\n\nenter panipuri : "<<s[i].panipuri<<endl;
		cout<<"enter burger : "<<s[i].v<<endl;
		cout<<"enter dosa : "<<s[i].dosa<<endl;
		cout<<"enter icecream : "<<s[i].icecream<<endl;
	}
	reture 0;
}
