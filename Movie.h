#include "iostream"
#include "fstream"
using namespace std;

class Movie {
public:

	void addMovie() {
		string line;
		fstream fo;
		int c = 0;
		cout << "Enter Movie name: ";
		fo.open("MovieName.txt", ios::in|ios::out|ios::app);
		getline(cin , line);
		fo << line << endl;
		fo.seekg(0, ios::beg);
		while(fo) {
			getline(fo, line);
			c++;
		}
		cout << "MovieId: " << c-1;
	}

private:
	int movieId;
	string movieName;
};