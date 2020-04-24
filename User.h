#include "iostream"
#include "fstream"
using namespace std;

class User {
public:
	void signUp() {
		fstream fo;
		fstream fo2;
		string line;
		int c = 0;
		cout << "Enter Username: ";
		fo.open("Username.txt", ios::in|ios::out|ios::app);
		getline(cin,line);
		fo << line << endl;
		fo.seekg(0, ios::beg); 
		while(fo) {
			getline(fo,line);
			c = c + 1;
		}
		fo2.open("Userpassword.txt", ios::in|ios::out|ios::app);
		cout << "Enter Password: ";
		getline(cin,line);
		fo2 << line << endl;
		cout << "Your UserId: " << c-1 << endl;	
		fo.close();
		fo2.close();
	}
};