#include "iostream"
#include "User.h"
#include "Movie.h"
using namespace std;


int main() {
	User a;
	Movie m;
	//a.signUp();
	//cout << a.getUserId();
	//bool b = a.login();
	//cout << b;
	m.addMovie();
	m.getMovies();
	return 0;
}