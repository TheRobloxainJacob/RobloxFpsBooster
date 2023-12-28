#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream myFile;
	myFile.open("myFile.txt");
	myFile << "Hello Testing";
}