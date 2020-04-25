#include "iostream"
#include "fstream"
using namespace std;

class Movie {
public:

	void addMovie() {
		string line;
		fstream fo;
		fstream fo2;
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
		fo2.open("MoviePrice.txt", ios::in|ios::out|ios::app);
		cout << "Enter price ticket for this movie: ";
		getline(cin , line);
		fo2 << line << endl;
		cout << "MovieId: " << c-1 << endl;
	}

	void getMovies() {
		string moname, moprice;
		int c = 0;
		fstream fo, fo2;
		system("clear");
		fo.open("MovieName.txt", ios::in|ios::out|ios::app);
		fo2.open("MoviePrice.txt", ios::in|ios::out|ios::app);
		while(fo && fo2) {
			c++;
			getline(fo, moname);
			getline(fo2, moprice);
			cout << "MovieId: " << c << endl << "Movie Name: " << moname << endl << "Movie Price: " <<moprice << endl;
		}
	}

private:
	int movieId;
	string movieName;
};