#include "iostream"
#include "User.h"
using namespace std;


int main() {
	User a;
	//a.signUp();
	//cout << a.getUserId();
	bool b = a.login();
	cout << b;
}