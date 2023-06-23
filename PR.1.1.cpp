#include <iostream>
using namespace std;

class Distance
{
	public:
    int feet;
    float inch;
}s1 , s2, sum;

int main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> s1.feet;
    cout << "Enter inch: ";
    cin >> s1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> s2.feet;
    cout << "Enter inch: ";
    cin >> s2.inch;

    sum.feet = s1.feet+s2.feet;
    sum.inch = s1.inch+s2.inch;

    if(sum.inch > 12) 
	{
        int extra = sum.inch / 12;
         sum.feet = sum.feet + extra;
        sum.inch = sum.inch - (extra * 12);
    } 
    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}

        
