#include "iostream"
#include "User.h"
#include "Movie.h"
#include "extra.h"
using namespace std;


int main() {
	User a;
	Movie m;
	string s;
	int n;
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
				cout << "Enter any number (1, 2, 3): ";
				cin >> s;
				quit(s);
				if(s == "1") {
					system("clear");
					while(true) {
						printHLine();
						cout << "Select which MovieYou want to book ticket for"<<endl;
						cout << "enter 0 to cancel" << endl;
						printHLine();
						m.getMovies();
						cout << "Enter id of movie you want to see: ";
						cin >> n; 
						if(n == 0) {
							break;
						}
						m.selectMovie(n);
						cout << m.getMovieName() << endl ;
						cin >> n; 
						if(n == 0) {
							break;
						}
					}
				}
				if(s == "2") {
					m.addMovie();
				}
				if(s == "3") {

				}
			}
		}
	}
	return 0;
}