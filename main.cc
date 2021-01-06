//Theo Andonyadis
//ECE 2620 Section 001
//Lab 2
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
class circle {   //declares circle class
	public:		//declares public member functions radius, circumference, area, and populate_classobj
		double radius() {
			double r = distance();
			return r;
		}
		double circumference() {
			double c = M_PI*2*radius();
			return c;
		}
		double area() {
			double a = M_PI*radius()*radius();
			return a;
		}
		void populate_classobj(double a, double b, double c, double d) {
			x1 = a;
			y1 = b;
			x2 = c;
			y2 = d;
		}
	private:	//declares private data members x1,y1,x2,y2
		double x1;
		double y1;
		double x2;
		double y2;
	protected:
		double distance() //Distance function used to find the distance from (x1,y1) to (x2,y2)
		{
			double run = x2-x1;
			double rise = y2-y1;
			double sum = run*run + rise*rise;
			double d = sqrt(sum);
			return d;
		}

};
int main()
{
	double p1, p2, p3, p4;
	cout << "Enter value for circle center x1" << endl; //Prompts user for values for x1,y1,x2,y2 in order
	cin >> p1;
	cout << "Enter value for circle center y1" << endl;
	cin >> p2;
	cout << "Enter value for point on circle x2" << endl;
	cin >> p3;
	cout << "Enter value for point on circle y2" << endl;
	cin >> p4;
	circle mycircle;	//declares object mycircle within circle class
	mycircle.populate_classobj (p1,p2,p3,p4);		//directs all inputs into the private data members
	double r = mycircle.radius ();		//the next 3 lines call public member functions and insert their values into r, a, and c
	double c = mycircle.circumference ();
	double a = mycircle.area ();
	char choice;
	while(choice != 4) //While loop to run the menu repeatedly
	{
	cout << "Do you wish to compute (1) Radius, (2) Circumference, (3) Area, or do you wish to Exit (4)?" << endl;
	cout << "Please select a number from the previous options." << endl;
	cin >> choice;
	switch(choice) {
		case '1' : cout << "Radius: " << r << endl; //Switch menu with 4 cases for the three calculations and exit, as well as default
		break;
		case '2' : cout << "Circumference: " << c << endl;
		break;
		case '3' : cout << "Area: " << a << endl;
		break;
		case '4' : cout << "Exit. Have a nice day!" << endl;
		return 0;
		default : cout << "Invalid input." << endl;
		break;
	}
	}
	return 0;
}

