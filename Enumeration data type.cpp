#include <iostream>
using namespace std;
// Enumeration data type for Days of the Week
enum DaysOfWeek {
    Monday = 1 ,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    int dayNumber;

    cout << "Enter a number (1-7) to represent a day of the week: ";
    cin >> dayNumber;

    // Validate the input and display the corresponding day
    if (dayNumber >= Monday && dayNumber <= Sunday) {
        // TODO: Print the name of the day using the enum
        cout << "The corresponding day is: ";
        
        switch(dayNumber)
        {
        	case Monday:
        		cout<<"Monday";
        		break;
        	case Tuesday:
        		cout<<"Tuesday";
        		break;
        	case Wednesday:
        		cout<<"Wednesday";
        		break;
        	case Thursday:
        		cout<<"Thursday";
        		break;
        	case Friday:
        		cout<<"Friday";
        		break;
        	case Saturday:
        		cout<<"Saturday";
        		break;
        	case Sunday:
        		cout<<"Sunday";
        		break;
		}
    } else {
        cout << "Invalid input! Please enter a number between 1 and 7.\n";
    }

    return 0;
}

