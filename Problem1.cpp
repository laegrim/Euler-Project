// Problem: find the sum of all the multiples of X or Y below Z


#include <iostream>
#include <cstdlib>

using namespace std;

main (int argc, char* argv[]) {
	
	int sum = 0;
	char* firstDenom;
	char* secondDenom;
	char* upperLimit;
	//Check Number of Arguments
	if (argc != 4){
		cout << "Number of Arguments Invalid, only " << argc << " arguments passed.\n"; 
		for (int i = 0; i < argc; i++)
			cout << "Arg " << i << ": " << argv[i] << endl;
		return 0;
	}
	//Make Sure Arguments Are Valid
	else {
		firstDenom = argv[1]; 
		secondDenom = argv[2];
		upperLimit = argv[3];
	} 
	
	int first = atoi(firstDenom);
	int second = atoi(secondDenom);
	int upper = atoi(upperLimit);

	if (upper < first || upper < second){
		cout << "Argument Sizes Invalid\n";
		return 0;
	}

	//Calculate and Print Output
	
	for (int i = 0; i < upper; i++){
		if (i % first == 0 || i % second == 0)
			sum += i;
	}
	cout << "Final Sum of Multiples of " << first << " and " << second << " below " << upper << ": " << sum << endl;

	return 0;
}
