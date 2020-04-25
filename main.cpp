#include "iostream"
#include "User.h"
#include "Movie.h"
#include "extra.h"
using namespace std;


int main() {
	User a;
	Movie m;
	string s;
	while(true) {
		system("clear");
		printHLine();
		printstarline();
		cout << "WELCOME to PVR Ticket Booking software" <<endl;
		if(a.isLoggedIn()) {
			string name = a.getUserName();
			cout << "WELCOME " << name << endl;
		}
		cout << "Enter quit if you want to exit" << endl;
		printstarline();
		printHLine();
		if(!a.isLoggedIn()) {
			cout << "Do you have an account ? (Y/N)" << endl;
			cin >> s;
			quit(s);
			if(s == "Y" || s == "y") {
				int n;
				string pass;
				cout << "Enter UserId: ";
				cin >> n;
				cout << "Enter Password: ";
				cin >> pass;
				quit(pass);
				a.login(pass, n);
			}
			if(s == "N" || s == "n") {
				string name;
				string pass;
				cout << "Enter UserName: ";
				cin >> name;
				quit(name);
				cout << "Enter Password: ";
				cin >> pass;
				quit(pass);
				a.signUp(name, pass);
			}
		} else {
			if(a.isLoggedIn()) {
				cout << "What would you like to do ??" <<endl;
				printHLine();
				cout << "1. Book Ticket for Movie" << endl;
				cout << "2. Add new Movie to database" << endl; 
				cout << "3. Check which Movie Tickets you already booked" << endl;
				cin >> s;
				quit(s);
			}
		}
	}
	return 0;
}