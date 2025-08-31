#include <iostream>//basic input and output
#include <string>
#include <cstdlib>//for file handling and memory management

using namespace std;

void displaymenu();
void display_Mainmenu();
void Add_Students();
void Add_Cources();
void Manage_Cources();
void Manage_Students();
void View_TraningPrograms();
void View_CompanyDetails();
void exit_menu();
void Logout();
void display_error();
void Staff_login();
void Administrator_login();


int main()
{
	cout << "             *** MASTER MIND INSTITUTE ***       " << endl;
	cout << "        -------------------------------------    " << endl;
	cout << "                                                 " << endl;
	cout << "                                                 " << endl;
	cout << "      Select Login as Admin ( A ) or Staff ( S ) " << endl;
	cout << "                                                 " << endl;
	cout << "             1. Administrator_login              " << endl;
	cout << "             2. Staff_login                      " << endl;
	cout << "                                                 " << endl;

	int option;
	cout << "      Select =  1 or 2:                      ";
	cin >> option;
	switch (option)
	{
	case 1: Administrator_login();
		break;
	case 2: Staff_login();
		break;
	default:display_error();
	}//end case
}

void Administrator_login()
{
	string username;
	string password;
	int counter = 3;

	cout << "                                                                              " << endl;
	cout << "                   ***   WELCOME!... Administrator Login page   ***           " << endl;
	cout << "                                                                              " << endl;
	do
	{//input

		cout << "" << endl;
		cout << "Enter username:";
		cin >> username;
		cout << "Enter password:";
		cin >> password;

		if ((username == "Ad01") && (password == "123"))

		{
			cout << "" << endl;
			cout << "        ------------------------- WELCOME! Login Successful... ------------------------ " << endl;
			cout << "         " << endl;
			break;
			cout << "\n";
		}
		else
		{
			cout << "Invalid Username/Password\n";
		}

		counter--;
	}

	while (counter > 0);

	if (counter == 0)
	{
		cout << "Login limit exceeded" << endl;
		exit(1); // Returns 1 to the operating system
	}
	else

		displaymenu();

}
void Staff_login()
{
	string username;
	string password;
	int counter = 3;
	cout << "                                                                              " << endl;
	cout << "                   ***   WELCOME!... Staff Login page   ***                   " << endl;
	cout << "                                                                              " << endl;
	do
	{//input

		cout << "" << endl;
		cout << "Enter username:";
		cin >> username;
		cout << "Enter password:";
		cin >> password;

		if ((username == "St01") && (password == "123"))

		{
			cout << "" << endl;
			cout << "Welcome...";
			break;
			cout << "\n";
		}
		else
		{
			cout << "Invalid Username/Password\n";
		}

		counter--;
	}

	while (counter > 0);

	if (counter == 0)
	{
		cout << "Login limit exceeded" << endl;
		exit(1); // Returns 1 to the operating system
	}
	else

		displaymenu();
}

void displaymenu()
{
	display_Mainmenu();

	int option;
	cout << "select 1,2,3,4,5,6,7,8:";
	cin >> option;

	switch (option)
	{

	case 1:Add_Students();
		break;
	case 2:Add_Cources();
		break;
	case 3:Manage_Cources();
		break;
	case 4:Manage_Students();
		break;
	case 5:View_TraningPrograms();
		break;
	case 6:View_CompanyDetails();
		break;
	case 7:Logout();
		break;
	case 8:exit_menu();
		break;
	default:display_error();
	}//end case

	displaymenu();

}
void display_Mainmenu()
{
	cout << "  Main menu  " << endl;
	cout << "             " << endl;
	cout << "1.Add Students" << endl;
	cout << "2.Add Cources" << endl;
	cout << "3.Manage Cources details" << endl;
	cout << "4.Manage Students details" << endl;
	cout << "5.View Available Traning Programs" << endl;
	cout << "6.View Company details" << endl;
	cout << "7.Logout" << endl;
	cout << "8.Exit" << endl;
	cout << "\n" << endl;

}
void Add_Students()
{
	struct student
	{
		char name[50];
		int roll;
		float marks;
	} s[10];



	cout << "Enter information of students: " << endl;

	// storing information
	for (int i = 0; i < 3; ++i)
	{
		s[i].roll = i + 1;
		cout << "For roll number" << s[i].roll << "," << endl;

		cout << "Enter name: ";
		cin >> s[i].name;

		cout << "Enter Age: ";
		cin >> s[i].marks;

		cout << endl;
	}

	cout << "Displaying Information: " << endl;

	// Displaying information
	for (int i = 0; i < 3; ++i)
	{
		cout << "\nRoll number: " << i + 1 << endl;
		cout << "Name: " << s[i].name << endl;
		cout << "Age: " << s[i].marks << endl;
		cout << " " << endl;
	}
}

void Add_Cources()
{
	struct course
	{
		char name[50];
		int roll;
		float marks;
	} s[10];



	cout << "Enter information of Cources: " << endl;

	// storing information
	for (int i = 0; i < 3; ++i)
	{
		s[i].roll = i + 1;
		cout << "For Course number" << s[i].roll << "," << endl;

		cout << "Enter Course name: ";
		cin >> s[i].name;

		cout << "Enter Course duration: ";
		cin >> s[i].marks;

		cout << endl;
	}

	cout << "Displaying Information: " << endl;

	// Displaying information
	for (int i = 0; i < 3; ++i)
	{
		cout << "\nCourse number: " << i + 1 << endl;
		cout << "Course Name: " << s[i].name << endl;
		cout << "Course duration: " << s[i].marks << endl;
		cout << " " << endl;
	}
}
void Manage_Cources()
{}
void Manage_Students()
{}
void View_TraningPrograms()
{
	//output
	cout << "1.Professional qualifications in Red Hat certifications" << endl;
	cout << "2.Java Programming " << endl;
	cout << "3.Web Development" << endl;
	cout << "4.Soft skills development " << endl;
	cout << "5.Mobile application development" << endl;
	cout << "" << endl;

	displaymenu();
}
void View_CompanyDetails()
{
	//output
	cout << "Company Details" << endl;
	cout << "*Call center - 0729351273/01125282085 " << endl;
	cout << "*Email - Mastermindinstitute123@gmail.com" << endl;
	cout << "*Address - No.10 /A,Negambo road wattala." << endl;
	cout << "" << endl;

	displaymenu();
}
void Logout()
{
	char response;

	cout << "Do you really want to Logout y/n:";
	cin >> response;
	if (response == 'Y' || response == 'y')
	{
		cout << "Logout successfully...." << endl;
		exit(0);

	}
	else if (response == 'n' || response == 'N')
	{

		displaymenu();

	}
}
void exit_menu()
{
	//declaring variable
	char response;

	cout << "Do you really want to exit y/n:";
	cin >> response;
	if (response == 'Y' || response == 'y')
	{
		cout << "Hope To See You Again...." << endl;
		exit(0);

	}
	else if (response == 'n' || response == 'N')
	{

		displaymenu();

	}
}
void display_error()
{//output
	cout << "Error!" << endl;
}
