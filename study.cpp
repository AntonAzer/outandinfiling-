#include <iostream>
#include <cmath >
#include <fstream>
using namespace std; 
int main() {
	
	ofstream outfile;
	outfile.open("C:\\Users\\hp\\OneDrive\\Desktop\\data.txt");
	if(outfile.fail()) {
		cout << "There is an error , I couldn't open new file"<<endl;
		}
	else {
		for (double x = -3; x <= 5; x += 0.01) {
			double y = exp(x) - 3 * x * x - 1.0;
			outfile << x << "\t" << y<<endl;
		}
		outfile.flush();
	}
	outfile.close();
	ifstream infile;
	infile.open("C:\\Users\\hp\\OneDrive\\Desktop\\data.txt");
	if (infile.fail()) {
		cout << "I could'nt reach the file to start read";
	}
	else {
		while (!infile.eof()) {
			double x, y;
			infile >> x >> y;

			cout << "X= " << x << " and Y= " << y << endl;
		}
	}
	return 0;
}
