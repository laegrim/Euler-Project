//Problem: Find the largest Palindrome created as a result of multiplying two x digit numbers

#include <iostream>
#include <cstdlib>

using namespace std;

main (int argc, char* argv[]){

	char* digits;
	long numDigits;

	//Check Number of Arguments
	if (argc != 2){
		cout << "Number of Arguments Invalid, only " << argc << " arguments passed.\n"; 
		for (int i = 0; i < argc; i++)
			cout << "Arg " << i << ": " << argv[i] << endl;
		return 0;
	}
	//Make Sure Arguments Are Valid
	else{
		digits = argv[1];
	}
	
	numDigits = atol(digits);
	
	//Calculate and Print Output
	

	
