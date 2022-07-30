//This program is used to calculate the Area's of the 
//Different shapes of the geometry.
#include <iostream>
#include <cmath>       //For pow function.
#include <iomanip>     //for setprecision().
using namespace std;

int main()
{
	double n, length, width, radius, height;
	double area, PI = 3.14159;
	
	cout << "\aCalculate the Area's of different shapes ";
	cout << "of Geometry:\n";
	
	do
	{
		//List of the Geometrical shapes.
		cout << "\nPress 1 for calculate the area of Sqaure/Rectangle.\n";
		cout << "Press 2 for calculate the area of Circle.\n";
		cout << "Press 3 for calculate the area of Cylinder.\n";
		cout << "Press 4 for calculate the area of Sphere.\n";
	
		cout << "\nPick a number in the range of (1-->4) : ";
		cin >> n;
	
		if (n == 1)
		{
			cout << "\nWhat's the length of Square/Rectangle ? ";
			cin >> length;
		
			cout << "What's the width of Square/Rectangle ? ";
			cin >> width;
		
			cout << fixed << showpoint << setprecision(2) << endl;
			area = length * width;
			cout << "The Area of Square/Rectangle is = " << area << ",\n";
			cout << "\n             *-----------------*            \n";
		}
	
		else if (n == 2)
		{
			cout << "\nEnter the radius of Circle : ";
			cin >> radius;
			
			cout << fixed << showpoint << setprecision(2) << endl;
			area = PI * pow (radius, 2.0);
			cout << "The area of Circle is = " << area << ",\n";
			cout << "\n             *-----------------*            \n";
		}
		
		else if (n == 3)
		{
			cout << "\nEnter the radius of Cylinder : ";
			cin >> radius;
			
			cout << "Enter the height of Cylinder : ";
			cin >> height;
			
			cout << fixed << showpoint << setprecision(2) << endl;
			area = 2 * PI * radius * height;
			cout << "The area of Cylinder is = " << area << ",\n";
			cout << "\n             *-----------------*            \n";
		}
	
		else if (n == 4)
		{
			cout << "\nEnter the radius of Sphere : ";
			cin >> radius;
			
			cout << fixed << showpoint << setprecision(2) << endl;
			area = 4 * PI * pow (radius, 2.0);
			cout << "The area of Sphere is = " << area << ",\n";
			cout << "\n             *-----------------*            \n";
		}
	
		else 
		{
			cout << "\a\nYou have entered incorrect number, Pick a \n";
			cout << "number in the range of (1-->4)...\n";
		}
	
		cout << "\a\nIf Do you want to process the program again.\n";
		cout << "Press 5 other wise closed it ! ";
		cin >> n;
	}
	while (n == 5);
		
	return 0;
}
