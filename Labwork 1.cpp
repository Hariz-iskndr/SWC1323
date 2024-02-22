/*
    Name: Muhammad Hariz Iskandar Bin Mohd Shari
    ID Number: AM2311015167
    Date: 22/2/2024
      

*/

#include <iostream>
using namespace std;

int main() {
	int choice;
	double radius, length, width, area, PI;
	
	cout << "Choose a shape to calculate its area:";
	cout << "\n 1. Circle";
	cout << "\n 2. Rectangle";
	cout << "\n Enter your choice (1 or 2): ";
	cin >> choice;
	PI = 3.14 ;
	
	if (choice == 1) {
		while (true) {
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		
		if ( radius <0) {
		
		     cout << "Invalid input. Radius cannot be negative." << endl;
	    }
		  else {
		
	      area = PI * (radius * radius);
		  cout << "Area of the circle is: " << area << endl;
		  break;
	      }
	    }
	}
	else if (choice == 2){
		while (true) {
			
		    cout << "Enter the length and width of the rectangle: ";
		    cout << "\nEnter the length of the rectangle: ";
		    cin >> length;
		    cout << "Enter the width of the rectangle: ";
		    cin >> width;
		
		if ((length <0) || (width < 0)) {
		
		     cout << "Invalid input. Length and width cannot be negative." << endl;
	    }
		  else {
		
	        area = length * width;// Calculate are of rectangle
	        cout << "Area of the rectangle is: " << area << endl;
	        break;
	      }
	    }
	}
	else
	    cout << "Invalid choice.Please enter 1 or 2." << endl;
    //end of if
    
    return 0;
}//end of the main function

