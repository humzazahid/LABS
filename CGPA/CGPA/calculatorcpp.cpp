#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	system("color FC");
	float grade = 0, credit = 0, temp = 0, temp1 = 0, temp2 = 0, final = 0;
	for (int i = 1; i<9; i++)
	{
		cout << "Enter Subject " << i << " GPA=";
		cin >> grade;
		cout << "Enter Subject " << i << " Credit hours=";
		cin >> credit;
		temp1 += credit;
		temp = grade*credit;
		temp2 += temp;
		grade = 0;
		credit = 0;
		temp = 0;
	}
	final = temp2 / temp1;
	cout << "Your CGPA OF SEMESTER IS=" << final;

}