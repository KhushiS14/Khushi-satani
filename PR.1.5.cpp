//5. WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class docter
{
	public: // public access modifier
		
	int id=121;
	char name[100] = "khushi satani";
	char hospital_name[100] = "shari hari";
	
	private: //private access modifier
		
	int salary = 1000;
};

int main()
{
	docter d1;
	
	cout << "Enter id : " << d1.id << endl;
	cout << "Enter name : " << d1.name << endl;
	cout << "Enter hospital_name : " << d1.hospital_name << endl;
	
	return 0;
}
