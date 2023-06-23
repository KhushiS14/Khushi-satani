//WAP to create a class which Read and Print House details along with Room details.

#include<iostream>
using namespace std;

class house
{
	public:
		
	int room = 5;
	int kichen = 1;
	int hall = 1;
	int swimming_pool = 1;
	int AC = 2;
};

class room
{
	public:
		
	int bed;
	int table;
	int books;
	int window;
	int TV;
};


	int main()
	{
		house h1;
		
		cout<<"house detailis : " << endl;
		
		h1.room;
		h1.kichen;
		h1.hall;
		h1.swimming_pool;
		h1.AC;
		
		r1.1bed;
		r1.1table;
		r1.1books;
		r1.1window;
		r1.1TV;
		
		cout << "number of room is : ";
		cin >> h1.room;
		
		cout << "number of kichen is : ";
		cin >> h1.kichen;
		
		cout << "number of hall is : ";
		cin >> h1.hall;
		
		cout << "number of swimming_pool is : ";
		cin >> h1.swimming_pool;
		
		cout << "number of A.C. is : ";
		cin >> h1.AC;
		
		cout <<"\n\n---------------\n\n";
		
		room r1;
		cout << "rooms details is : " << endl;
		
		cout << "number of bed is : ";
		cin >> r1.1bed;
		
		cout << "number of table is : ";
		cin >> r1.1table;
		
		cout << "number of books is : ";
		cin >> r1.1books;
		
		cout << "number of window is : ";
		cin >> r1.1window;
		
		cout << "number of T.V. is : ";
		cin >> r1.1TV;			
	}
