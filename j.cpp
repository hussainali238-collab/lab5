#include <iostream>
using namespace std;
int main()
{
	int day;
	cout  <<  "Enter day number" << endl;
	cin >> day;
	switch (day) {
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;

	default:
		cout << "Enter a valid input" << endl;

	}



/*int main()
{
    char grade;
    double gradePoint;

    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "Excellent work" << endl;
        gradePoint = 4.0;
        break;

    case 'B':
    case 'b':
        cout << "Good" << endl;
        gradePoint = 3.0;
        break;

    case 'C':
    case 'c':
        cout << "Satisfactory" << endl;
        gradePoint = 2.0;
        break;

    case 'D':
    case 'd':
        cout << "Needs improvement" << endl;
        gradePoint = 1.0;
        break;

    case 'F':
    case 'f':
        cout << "Fail" << endl;
        gradePoint = 0.0;
        break;

    default:
        cout << "Invalid grade" << endl;
        gradePoint = 0.0;
    }

    cout << "Grade Point: " << gradePoint << endl;
*/

    //TASK 3
    int choice;
    float value, converted;

    cout << "Unit Converter" << endl;
    cout << "1. Kilometres to miles" << endl;
    cout << "2. Kilograms to pounds" << endl;
    cout << "3. Celsius to Fahrenheit" << endl;
    cout << "4. Inches to centimetres" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    switch (choice)
    {
    case 1:
        converted = value * 0.621371;
        cout << fixed << setprecision(2);
        cout << value << " km = " << converted << " miles" << endl;
        break;

    case 2:
        converted = value * 2.20462;
        cout << fixed << setprecision(2);
        cout << value << " kg = " << converted << " pounds" << endl;
        break;

    case 3:
        converted = value * 9 / 5 + 32;
        cout << fixed << setprecision(2);
        cout << value << " C = " << converted << " F" << endl;
        break;

    case 4:
        converted = value * 2.54;
        cout << fixed << setprecision(2);
        cout << value << " inches = " << converted << " centimetres" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }




    //TASK 4
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        cout << "Season: Winter" << endl;
        break;

    case 3:
    case 4:
    case 5:
        cout << "Season: Spring" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "Season: Summer" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "Season: Autumn" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Days: 31" << endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Days: 30" << endl;
        break;

    case 2:
        cout << "Days: 28" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

//ASK 5
        int year;

        cout << "Enter a year: ";
        cin >> year;

        if (year > 0)
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if (year % 400 == 0)
                    {
                        cout << year << " this is a leap year" << endl;
                        cout << "february has 29 days" << endl;
                    }
                    else
                    {
                        cout << year << " this is not a leap year" << endl;
                        cout << "February has 28 days" << endl;
                    }
                }
                else
                {
                    cout << year << "this is  leap year" << endl;
                    cout << "February has 29 days" << endl;
                }
            }
            else
            {
                cout << year << " is not a leap year" << endl;
                cout << "February has 28 days" << endl;
            }
        }
        else
        {
            cout << "Invalid year" << endl;
        }








    return 0;
}