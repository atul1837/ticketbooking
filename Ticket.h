#include "iostream"
#include "iomanip"
#include "fstream"
#include <string>

using namespace std;

void genTicket(string name, int price, int id, int tickets = 1) {
	fstream fo;
	//system("clear");
	string total_amount = to_string(price * tickets);
	string Price = to_string(price);
	string Id = to_string(id);
	string Tickets = to_string(tickets);
	fo.open("Ticket.txt", ios::out);
		// fo << printHline();
		fo << setw(75) << "Cinema Hall Ticket\n";
		// fo << printHline();
		fo << setw(15) << "Movie Name" << setw(15) << "Movie Id" << setw(15) << "Price" << setw(15) << "Tickets" << setw(15) << "Amount" << endl;			
		fo << setw(15) << name << setw(15) << Id << setw(15) << Price << setw(15) << Tickets << setw(15) << total_amount << endl;
		fo << endl << endl << endl << endl ;
		fo << setw(90) << "Total Amount " << total_amount << endl;
		// cout << endl << printHline();
		fo << setw(60) << "Enjoy Your Show";
	fo.close();
}